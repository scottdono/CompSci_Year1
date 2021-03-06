#pragma config(Sensor, S1,     touchSensor,    sensorEV3_Touch)
#pragma config(Sensor, S4,     gyroSensor,     sensorEV3_Gyro, modeEV3Gyro_RateAndAngle)
#pragma config(Sensor, S3,     colorSensor,    sensorEV3_Color, modeEV3Color_Color)
#pragma config(Sensor, S2,     sonarSensor,    sensorEV3_Ultrasonic)
#pragma config(Motor,  motorA,          armMotor,      tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorB,          leftMotor,     tmotorEV3_Large, PIDControl, driveLeft, encoder)
#pragma config(Motor,  motorC,          rightMotor,    tmotorEV3_Large, PIDControl, driveRight, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

void moveForward(int speed);
void detectObstacle();
void onObstacleTurnLeft90();
void displayDistance();
void drive(long nMotorRatio, long dist, long motorPower);

// GLOBAL VARIABLES
int detectObstacleCounter = 0;
int count = 0;
float avgSensorValue = 0.0;

task main()
{
	bool EXIT = false;

	while(!EXIT)
	{
		displayDistance();
		moveForward(35); /* Move forward with 35 speed */
		detectObstacle(); /* Detect any obstacle */
		/* If function detectObstacle was called more than 2 times, set EXIT to true which will exit main loop. */
		if(detectObstacleCounter > 2)
		{
			drive(0, 30, 50); // Drive forward 30cm
			EXIT = true;
		}
	}
}

void moveForward(int speed)
{
	setMotorSpeed(rightMotor, speed);
	setMotorSpeed(leftMotor, speed);
}

void detectObstacle()
{
	/* Multisampling sonar sensor value */
	count++;
	avgSensorValue += SensorValue(sonarSensor);
	if(count > 100)
	{
			avgSensorValue /= (float)count;
			displayCenteredBigTextLine(5, "%f", avgSensorValue);
			/* // If distance to obstacle is less than 10cm or touch sensor is pressed
			 * or that function was called less than 2 times
			 */
			if((avgSensorValue > 10.0 || SensorValue(touchSensor) == 1.0) && detectObstacleCounter < 3)
			{
					displayCenteredBigTextLine(3, "Obstacle detected\n");
					/* Reset motors state */
					resetMotorEncoder(rightMotor);
					resetMotorEncoder(leftMotor);

					int randomSpeed = random(50) + 25;
					/* move backward at -30 speed */
					setMotorTarget(rightMotor, 360, randomSpeed * -1);
					setMotorTarget(leftMotor, 360, randomSpeed * -1);
					/* Wait until motors stops */
					waitUntilMotorStop(rightMotor);
					waitUntilMotorStop(leftMotor);
					/* Turn 90 degrees left */
					onObstacleTurnLeft90();
					/*  Increment variable that counts how many times any sensor detected obstacle */
					detectObstacleCounter++;
			}
			/* Reset multisampling variables */
			count = 0;
			avgSensorValue = 0;
	}
}
/* Turn left 90 degrees */
void onObstacleTurnLeft90()
{
		resetMotorEncoder(rightMotor);
		resetMotorEncoder(leftMotor);
		resetGyro(gyroSensor);
		sleep(200);
		while(fabs(getGyroDegrees(gyroSensor)) < 85)
		{
			setMotorSpeed(rightMotor, 10);
			setMotorSpeed(leftMotor, -10);
			//displayCenteredBigTextLine(5, "%d@", getGyroDegrees(gyroSensor));
		}
		setMotorSpeed(rightMotor, 0);
		setMotorSpeed(leftMotor, 0);
}

/* Display current distance to any obstacle */
void displayDistance()
{
		eraseDisplay();
		displayCenteredBigTextLine(1, "%3d cm", SensorValue(sonarSensor));
}

/* Function that drives wheels on specified distance in centimeters.
 * Function also takes nMotorRatio and motor power as arguments.
 */
void drive(long nMotorRatio, long dist, long motorPower)
{
		float wheelDiameter = 5.5; // In cm
		float distanceInOneRotation = wheelDiameter * PI; //2*R*PI
		float rotations = dist / distanceInOneRotation; // How many full wheel rotations are in given distance
		setMotorSyncEncoder(leftMotor, rightMotor, nMotorRatio, 360 * rotations, motorPower);
		waitUntilMotorStop(leftMotor);
		waitUntilMotorStop(rightMotor);
}

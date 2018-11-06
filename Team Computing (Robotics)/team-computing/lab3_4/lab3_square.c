#pragma config(StandardModel, "EV3_REMBOT")
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

// Program that drives robot in square pattern in random generated direction.

void drive(long nMotorRatio, long dist, long motorPower);
void turn90(long nMotorRatio, long motorPower);

task main()
{
	int genDirection = random(1); // Generate random <0, 1>
	int direction;				  // Direction variable

	// Choose direction basing on random generated number
	if(genDirection == 0)
	{
		direction = -100;
		eraseDisplay();
		displayCenteredBigTextLine(2, "Going LEFT");
	}
	else
	{
		direction = 100;
		eraseDisplay();
		displayCenteredBigTextLine(2, "Going RIGHT");
	}

	for(int i = 0; i < 4; i++)
	{
		drive(0, 60, 50); // Drive forward 60cm
		turn90(direction, 15); // Turn right 90 degree
	}
}

void drive(long nMotorRatio, long dist, long motorPower)
{ // Function that drives wheels on specified distance in centimeters. Function also takes nMotorRatio and motor power as arguments.
		float wheelDiameter = 5.5; // In cm
		float distanceInOneRotation = wheelDiameter * PI; //2*R*PI
		long rotations = dist / distanceInOneRotation; // How many full wheel rotations are in given distance
		setMotorSyncEncoder(leftMotor, rightMotor, nMotorRatio, 360 * rotations, motorPower);
		waitUntilMotorStop(leftMotor);
		waitUntilMotorStop(rightMotor);
}


void turn90(long nMotorRatio, long motorPower)
{ // Turn 90 degrees in specified direction and power
		setMotorSyncEncoder(rightMotor, leftMotor, nMotorRatio, 180, motorPower);
		waitUntilMotorStop(rightMotor);
}
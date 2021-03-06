#pragma config(Sensor, S1,     touchSensor,    sensorEV3_Touch)
#pragma config(Sensor, S4,     gyroSensor,     sensorEV3_Gyro, modeEV3Gyro_RateAndAngle)
#pragma config(Sensor, S3,     colorSensor,    sensorEV3_Color, modeEV3Color_Color)
#pragma config(Sensor, S2,     sonarSensor,    sensorEV3_Ultrasonic)
#pragma config(Motor,  motorA,          armMotor,      tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorB,          leftMotor,     tmotorEV3_Large, PIDControl, driveLeft, encoder)
#pragma config(Motor,  motorC,          rightMotor,    tmotorEV3_Large, PIDControl, driveRight, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	while(true)
	{
			// Write the amount of reflected light to the screen between 0 -100
			displayBigTextLine(6, "Degrees: %d", SensorValue[gyroSensor]);
			// Wait 20 ms to get 50 readings per second
			sleep(20);

			if(getGyroDegrees(gyroSensor)>0) //When moved to the left it will move the motors forward
			{
				setMotorSpeed(rightMotor, 50);
				setMotorSpeed(leftMotor, 50);
			}

			if(getGyroDegrees(gyroSensor)<0) //When moved to the right it will move the motors in reverse
			{
				setMotorSpeed(rightMotor, -50);
				setMotorSpeed(leftMotor, -50);
			}

			if(getGyroDegrees(gyroSensor)==0)//When centered the motors will stop
			{
				setMotorSpeed(rightMotor, 0);
				setMotorSpeed(leftMotor, 0);
			}
	}

}

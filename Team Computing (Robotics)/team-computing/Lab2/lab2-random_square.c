#pragma config(StandardModel, "EV3_REMBOT")

//Declaration of moveRobot function
void moveRobot(short nMotorRatio, long time, short power);

task main()
{
		int direction = random(200) - 100;
		int motorRatio;
		if(direction < 0)
		{
			motorRatio = -100;
		}
		else
		{
			motorRatio = 100;
		}

		moveRobot(0, 1500, 50);
		moveRobot(motorRatio, 685, 50);
		moveRobot(0, 1500, 50);
		moveRobot(motorRatio, 685, 50);
		moveRobot(0, 1500, 50);
		moveRobot(motorRatio, 685, 50);
		moveRobot(0, 1500, 50);
		moveRobot(motorRatio, 685, 50);
}
// nMotorRatio range is from -100 to 100
// If nMotorRatio value is 0, then the same power is applied to both of the motors
/* If nMotorRatio value is less than 0, then power is applied to motors in ratio(left : right)
			nMotorValue : 100 - nMotorValue, so for example, for nMotorRatio = -40, 40% of power is applied
			left motor and 60% to right motor*/
/* If nMotorRatio value is greater than 0, power is applied in ratio(left : right)
			100 - nMotorSpeed : nMotorValue */

void moveRobot(short nMotorRatio, long time, short power)
{
	short powerLeft;
	short powerRight;

	if(nMotorRatio < -100 || nMotorRatio == 0 || nMotorRatio > 100)
	{
		powerLeft = power;
		powerRight = power;
	}
	else if(nMotorRatio < 0 && nMotorRatio <= -100)
	{
		powerLeft = (fabs(nMotorRatio) / 100) * power;
		powerRight = power - powerLeft;
	}
	else if(nMotorRatio > 0 && nMotorRatio <= 100)
	{
		powerRight = (nMotorRatio / 100) * power;
		powerLeft = power - powerRight;
	}

	setMotorSpeed(rightMotor, powerRight);
	setMotorSpeed(leftMotor, powerLeft);
	sleep(time);
}

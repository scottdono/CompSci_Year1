#pragma config(StandardModel, "EV3_REMBOT")

//Declaration of moveRobot function
void moveRobot(short nMotorRatio, long time, short power);

task main()
{



}
// nMotorRatio range is from -1 to 1
// If nMotorRatio value is 0, then the same power is applied to both of the motors
/* If nMotorRatio value is less than 0, then power is applied to motors in ratio(left : right)
			nMotorValue : nMotorValue - 1, so for example, for nMotorRatio = -0.4, 40% of power is applied
			left motor and 60% to right motor*/
/* If nMotorRatio value is greater than 0, power is applied in ratio(left : right)
			1 - nMotorSpeed : nMotorValue */

void moveRobot(short nMotorRatio, long time, short power)
{
	short powerLeft;
	short powerRight;

	if(nMotorRatio < -100 || nMotorRatio == 0 || nMotorRatio > 100)
	{
		powerLeft = power;
		powerRight = power;
	}
	else if(nMotorRatio < 0 && nMotorRatio > -100)
	{
		powerLeft = fabs(nMotorRatio) * power / 100;
		powerRight = 1.0 - powerLeft;
	}
	else if(nMotorRatio > 0 && nMotorRatio < 100)
	{
		powerRight = fabs(nMotorRatio) * power / 100;
		powerLeft = 100 - powerRight;
	}

	setMotorSpeed(rightMotor, powerRight);
	setMotorSpeed(leftMotor, powerLeft);
	sleep(time);
}

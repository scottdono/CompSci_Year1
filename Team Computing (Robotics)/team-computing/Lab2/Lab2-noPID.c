#pragma config(StandardModel, "EV3_REMBOT")

void turn90degreesLeft()
{
	setMotorSpeed(rightMotor, 50);  //Set the rightMotor (motor6) to half power (50)
	setMotorSpeed(leftMotor, 0); // Set the leftMotor to zero
	sleep(750);
}
void turn90degreesRight()
{
	setMotorSpeed(leftMotor, 50);  //Set the leftMotor (motor1) to half power (50)
	setMotorSpeed(rightMotor, 0); // Set the rightMotor to zero
	sleep(750);
}
void goForward1second()
{
	setMotorSyncTime(rightMotor, leftMotor, 0, 1000, 100);	//Sync up the wheels to move straight for 1 second.
	sleep(1500);
}
void swingRight90degrees()
{
	setMotorSyncTime(rightMotor, leftMotor, 50, 1000, 100); //slowly turn right
	sleep(1000);
}
void swingLeft90degrees()
{
	setMotorSyncTime(rightMotor, leftMotor, -50, 1000, 100); //slowly turn left
	sleep(1000);
}
void reverse1second()
{
	setMotorSyncTime(rightMotor, leftMotor, 0, 1000, -100);	//Sync up the wheels to move in reverse for 1 second.
	sleep(1500);
}
task main()
{
	turn90degreesLeft();
	turn90degreesRight();
	goForward1second();
	swingRight90degrees();
	swingLeft90degrees();
	reverse1second();


} //end main

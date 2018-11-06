#pragma config(StandardModel, "EV3_REMBOT")
#pragma config(Sensor, S3,     Colour,         sensorEV3_Color, modeEV3Color_Reflected).

task main()
{
	int on=0;

	while(on==0)
	{
		if(SensorValue[Colour]>20)
		{
			setMotorSpeed(leftMotor, 50);	//Set the leftMotor to half power forward (50)
			setMotorSpeed(rightMotor, 50); 	//Set the rightMotor to half power forward (50)
		}
		else
		{
			on=1;
		}
	} //end while

} //end main

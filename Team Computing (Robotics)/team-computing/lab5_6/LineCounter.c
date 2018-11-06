#pragma config(StandardModel, "EV3_REMBOT")
#pragma config(Sensor, S3,     Colour,         sensorEV3_Color, modeEV3Color_Reflected).

task main()
{
	int no_of_lines=0;
	bool detect=false;
	int on=0;

	while(on==0)
	{
		displayBigTextLine(6, "Lines: %d", no_of_lines);
		// Wait 20 ms to get 50 readings per second
		sleep(20);


		if(SensorValue[Colour]>10)
		{
			setMotorSpeed(leftMotor, 5);	//Set the leftMotor to half power forward (50)
			setMotorSpeed(rightMotor, 5); 	//Set the rightMotor to half power forward (50)
			sleep(200);
		}
		else
		{
			detect= true;
			setMotorSpeed(leftMotor, 15);
			setMotorSpeed(rightMotor, 15);
			sleep(200);
		}

		if(detect==true)
		{
			no_of_lines++;
			detect = false;
			sleep(200);
		}

		if(no_of_lines==10)
		{
			on=1;
		}

	} //end while

} //end main

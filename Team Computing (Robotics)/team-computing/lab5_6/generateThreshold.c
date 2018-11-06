
#pragma config(Sensor, S3,     Colour,         sensorEV3_Color, modeEV3Color_Reflected).

task main()
{
	int light=0;
	int dark=0;
	int threshold=0;
	short menuPosition = 0;
	bool buttonPressed = false;
	bool buttonEnterPressed = false;

	while (true)
	{
		// Write the amount of reflected light to the screen between 0 -100
		displayBigTextLine(12, "Reflected: %d", SensorValue[Colour]);
		// Wait 20 ms to get 50 readings per second
		sleep(20);
		buttonEnterPressed = false; //reinitialise variable

		if(SensorValue[Colour]>50) //assign values into variables based on sensor readings
		{
			light = (SensorValue[Colour]);
		}
		else
		{
			dark = (SensorValue[Colour]);
		}

		threshold = (dark+light)/2;


		// Clear display every frame
		eraseDisplay();
		// If buttonIp is pressed, increment menu position, else decrement menu position.
		// Check if menuPosition is not out of its bounds (0-3).
		if(getButtonPress(buttonUp) && !buttonPressed)
		{
		buttonPressed = true;
			menuPosition--;
			if(menuPosition < 0)
				menuPosition = 0;
		}
		if(getButtonPress(buttonDown) && !buttonPressed)
		{
			buttonPressed = true;
			menuPosition++;
			if(menuPosition > 2)
				menuPosition = 2;

		}

		// Display current menu position based on user input.
		switch(menuPosition)
		{
			case 0:
					displayCenteredBigTextLine(1, ">Light<");
					displayCenteredBigTextLine(3, "Dark");
					displayCenteredBigTextLine(5, "Threshold");
					// If button enter pressed, start moving forward basing on menu option chosen by user.
					if(getButtonPress(buttonEnter) && !buttonEnterPressed)
					{
							buttonEnterPressed = true;
							// Write the amount of reflected light to the screen between 0 -100
							eraseDisplay();
							sleep(20);
							displayBigTextLine(6, "Light: %d", light);
							sleep(20);
							// Check if buttons are released
							if(!getButtonPress(buttonDown) || !getButtonPress(buttonUp))
							{
									buttonPressed = false;
							}

							if(!getButtonPress(buttonEnter))
							{
									buttonEnterPressed = false;
							}
					}
					buttonPressed = false;
				break;

			case 1:
					displayCenteredBigTextLine(1, "Light");
					displayCenteredBigTextLine(3, ">Dark<");
					displayCenteredBigTextLine(5, "Threshold");
					// If button enter pressed, start moving forward basing on menu option chosen by user.
					if(getButtonPress(buttonEnter) && !buttonEnterPressed)
					{
							buttonEnterPressed = true;
							// Write the amount of reflected light to the screen between 0 -100
							eraseDisplay();
							sleep(20);
							displayBigTextLine(8, "Dark: %d", dark);
							sleep(20);
							// Check if buttons are released
							if(!getButtonPress(buttonDown) || !getButtonPress(buttonUp))
							{
									buttonPressed = false;
							}

							if(!getButtonPress(buttonEnter))
							{
									buttonEnterPressed = false;
							}
					}
					buttonPressed = false;
				break;

			case 2:
					displayCenteredBigTextLine(1, "Light");
					displayCenteredBigTextLine(3, "Dark");
					displayCenteredBigTextLine(5, ">Threshold<");
					// If button enter pressed, start moving forward basing on menu option chosen by user.
					if(getButtonPress(buttonEnter) && !buttonEnterPressed)
					{
							buttonEnterPressed = true;
							// Write the amount of reflected light to the screen between 0 -100
							eraseDisplay();
							sleep(20);
							displayBigTextLine(10, "Threshold: %d", threshold);
							sleep(20);
							// Check if buttons are released
							if(!getButtonPress(buttonDown) || !getButtonPress(buttonUp))
							{
									buttonPressed = false;
							}

							if(!getButtonPress(buttonEnter))
							{
									buttonEnterPressed = false;
							}
					}
					buttonPressed = false;
				break;
	 } //end switch
	 sleep(250);
	} //end while()

} //end main()


#pragma config(Sensor, S1,     button,         sensorEV3_Touch)
#pragma config(Motor,  motorB,          Left,          tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorC,          Right,         tmotorEV3_Large, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
int spin = 10;

	while(true)

	{

		if(SensorValue(button)==0)

		{

			while(spin <= 100)

			{
				motor[Left]= 100; motor[Right]=100;
				wait1Msec(100);

				motor[Left] = spin;

				motor[Right] = spin + 20;

				wait1Msec(5000);



				spin = spin + 10;

				if( SensorValue(button)==1)
				{
					motor[Right] =-100; motor[Left]= -100;
					wait1Msec(250);
					motor[Right]=0; motor[Left] = -100;
					wait1Msec(500);
		 				while(SensorValue(button)==0)
  					{
							motor[Right]=60; motor[Left] =100;
  						wait1Msec(100);
						}

				}

			}

		}



}































	}

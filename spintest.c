#pragma config(Sensor, S1,     button,         sensorEV3_Touch)
#pragma config(Motor,  motorB,          Left,          tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorC,          Right,         tmotorEV3_Large, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{

	int spin = 10;
	while(spin <= 100)
	{
		motor[Left] = spin;
		motor[Right] = spin + 20;
		wait1Msec(7000);

	spin = spin + 10;
	}

}

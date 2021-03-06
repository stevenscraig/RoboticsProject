
#pragma config(Sensor, S1,     button,         sensorEV3_Touch)
#pragma config(Motor,  motorB,          Left,          tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorC,          Right,         tmotorEV3_Large, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	while(SensorValue(button)==0)
	{
		motor[Right] =100; motor[Left] =100;
		wait1Msec(1000);
	}

	motor[Right] =50; motor[Left]= -50;
wait1Msec(500);

while(SensorValue(button)==0)
{
	motor[Right] =75; motor[Left] =100;
	wait1Msec(1000);

	if(SensorValue(button)==1)
	{
		motor[Right] =-100; motor[Left]= -100;
		wait1Msec(3000);
		motor[Right]=0; motor[Left] = -100;
		wait1Msec(750);
	}
}

}

#include "pid.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define PI 3.1415926
int main()
{
	PID_init();
	pid.Kd = 0.005;	// diff 0.09
	pid.Ki = 0.4;	// £¨time delay£©0.05
	pid.Kp = 0.6;	// 
	int count = 0;
	FILE *fp;
	fp = fopen("../../matlab.txt", "w+");
	if (fp == NULL)
		return -1;

	float exceptedSpeed = 0;
	float actualSpeed = 0;
	while (count < 1000)
	{
		exceptedSpeed = 100*(count/100*sin(2*PI*count/100)) + rand () % (10);
		//exceptedSpeed = count;
		actualSpeed = PID_realize(exceptedSpeed);
		fprintf(fp, "%f\n", exceptedSpeed);
		fprintf(fp, "%f\n", actualSpeed);
		count++;
	}
	fclose(fp);
	return 0;
}
#ifndef _PID_H_
#define _PID_H_

struct _pid
{
	float SetSpeed;
	float ActualSpeed;
	float err;
	float err_next;
	float err_last;
	float Kp;
	float Ki;
	float Kd;
};
extern _pid pid;

void PID_init();
float PID_realize(float speed);

#endif
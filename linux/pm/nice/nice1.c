#include"header.h"
void task1(void)
{
	while(1)
		printf("Task1...pid=%d\n",getpid());
}
void task2(void)
{
	while(1)
		printf("Task2...pid=%d\n",getpid());
}
void main()
{
	if(fork()==0)
		task1();
	else
		task2();
}

#include"header.h"

void * task1(void *p)
{
while(1)
printf("In task1 %s\n",(char*)p);
}
void main()
{

pthread_t t1;
	pthread_create(&t1,0,task1,"Hello");

//pthread_exit(0);
//while(1);
}

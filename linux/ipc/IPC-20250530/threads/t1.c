#include"header.h"

void * task1(void *p)
{
while(1)
printf("In thread_1 tid=%ld pid=%d\n",pthread_self(),getpid());
}
void main()
{

pthread_t t1;
	pthread_create(&t1,0,task1,0);

while(1)
printf("In main thread tid=%ld pid=%d\n",pthread_self(),getpid());
}

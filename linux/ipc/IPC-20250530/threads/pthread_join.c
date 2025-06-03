#include"header.h"
void * thread_1(void *p)
{
printf("In thread1 %ld\n",pthread_self());
sleep(20);
pthread_exit("Bye");
}
void main()
{
void *p;
pthread_t t1;
	pthread_create(&t1,0,thread_1,0);

printf("In main before....\n");
pthread_join(t1,&p);
printf("After %s\n",(char*)p);
}

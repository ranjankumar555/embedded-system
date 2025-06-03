#include"header.h"
void * thread_1(void *p)
{
printf("The Length of %s is %ld\n",(char *)p,strlen((char *)p));

}
void main(int argc,char **argv)
{

if(argc!=2)
{
	printf("Usage:./a.out string\n");
	return;
}
pthread_t t1;
	pthread_create(&t1,0,thread_1,argv[1]);

pthread_exit(0);
}

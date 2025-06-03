#include"header.h"
void * thread_1(void *p)
{
int fd=open("f1",O_WRONLY);
char s[10];
	while(1)
	{
	scanf("%s",s);
	write(fd,s,strlen(s)+1);
	}
}
void * thread_2(void *p)
{
int fd=open("f2",O_RDONLY);
char s[10];
	while(1)
	{
	read(fd,s,sizeof(s));
	printf("Data=%s\n",s);
	}

}

void main()
{
pthread_t t1,t2;
	mkfifo("f1",0664);
	mkfifo("f2",0664);
	pthread_create(&t1,0,thread_1,0);
	pthread_create(&t2,0,thread_2,0);

pthread_exit(0);
}

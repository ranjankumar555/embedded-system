#include"header.h"

void main()
{
int r=mkfifo("f1",0664);

perror("mkfifo");
printf("r=%d\n",r);

printf("Before...\n");	
int fd=open("f1",O_RDONLY);

printf("After...\n");	
	if(fd<0)
	{
	perror("open");
	}
char s[10];
read(fd,s,sizeof(s));
printf("Data=%s\n",s);
}

#include"header.h"
void main()
{
int r=mkfifo("f1",0664);

perror("mkfifo");
printf("r=%d\n",r);
printf("Before...\n");	
int fd=open("f1",O_WRONLY);
printf("After...\n");	
	if(fd<0)
	{
	perror("open");
	}
char s[10];
printf("Enter the data...\n");
scanf("%s",s);
write(fd,s,strlen(s)+1);
}

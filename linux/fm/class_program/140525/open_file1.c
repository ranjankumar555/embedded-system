#include"header.h"

void main()
{
//FILE *fp=fopen("data","r");
int fd=open("data",O_RDONLY);
	if(fd<0)
	{
	perror("open");
	return;
	}
printf("fd=%d\n",fd);
char s[10];
int r;
	bzero(s,sizeof(s));
	r=read(fd,s,5);
//s[r]='\0';
printf("r=%d\n",r);
printf("s=%s\n",s);
}

#include"header.h"
void main()
{

close(0);
int fd=open("DATA",O_RDONLY);

	if(fd<0)
	{
	perror("open");
	return;
	}
int a[5],i;
for(i=0;i<5;i++)
scanf("%d",&a[i]);

for(i=0;i<5;i++)
printf("%d ",a[i]);
printf("\n");
//printf("Hello world fd=%d\n",fd);

}

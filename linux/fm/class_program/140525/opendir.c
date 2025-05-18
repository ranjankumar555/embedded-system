#include"header.h"

void main(int argc,char **argv)
{
DIR *dp;
if(argc!=2)
{
printf("Usage:./a.out dir\n");
return;
}
	dp=opendir(argv[1]);

if(dp==0)
{
perror("opendir");
return;
}
struct dirent *p;

while(p=readdir(dp))
{
if(p->d_name[0]!='.')
printf("%s\n",p->d_name);

}


}





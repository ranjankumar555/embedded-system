#include"header.h"
void main(int argc,char **argv)
{
	if(argc!=2)
	{
	printf("Usage:./a.out fname\n");
	return;
	}
struct stat v;
	if(stat(argv[1],&v)<0)
	{
	perror("stat");
	return;
	}
if(S_ISREG(v.st_mode))
printf("Regular ...\n");
else if(S_ISDIR(v.st_mode))
printf("Dir...\n");


}

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
printf("atime=%lu\n",v.st_atime);
printf("mtime=%lu\n",v.st_mtime);
printf("ctime=%lu\n",v.st_ctime);



}

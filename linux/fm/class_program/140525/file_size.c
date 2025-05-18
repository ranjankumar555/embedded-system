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
printf("File size =%ld\n",v.st_size);
printf("Ino number %ld\n",v.st_ino);
printf("%o\n",v.st_mode);
printf("%o\n",v.st_mode&0777);
}

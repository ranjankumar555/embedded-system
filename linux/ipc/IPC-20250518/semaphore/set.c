#include"header.h"
void main(int argc,char **argv)
{
if(argc!=3)
{
	printf("Usage:./set semnum val\n");
	printf("Ex:./set 2 3\n");
	return;}
int id=semget(4,5,IPC_CREAT|0664);
	if(id<0)
	{
	perror("semget");
	return;
	}
printf("id=%d\n",id);
semctl(id,atoi(argv[1]),SETVAL,atoi(argv[2]));
	perror("semctl");



}

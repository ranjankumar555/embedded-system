#include"header.h"
void main(int argc,char **argv)
{
if(argc!=2)
{
	printf("Usage:./op semop(0,>0,<0)\n");
	return;}
int id=semget(4,5,IPC_CREAT|0664);
	if(id<0)
	{
	perror("semget");
	return;
	}
printf("id=%d\n",id);
struct sembuf v;
v.sem_num=2;
v.sem_op=atoi(argv[1]);
v.sem_flg=SEM_UNDO;

	printf("Before...\n");
	semop(id,&v,1);
	printf("After...\n");
	sleep(20);
	printf("Done...\n");

}

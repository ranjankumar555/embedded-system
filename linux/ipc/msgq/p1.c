#include"header.h"
struct msgbuf
{
	long mtype;//>0
	char s[10];
};

void main(int argc,char **argv)
{
	if(argc!=3){
	printf("Usage:./t mtype msg\n");
	printf("Ex:./t 2 hello\n");
	return;}
int id=msgget(5,IPC_CREAT|0664);
	if(id<0){
	perror("msgget");
	return;}
printf("id=%d\n",id);
//////////////////////////////////////
struct msgbuf v;
v.mtype=atoi(argv[1]);
strcpy(v.s,argv[2]);
	msgsnd(id,&v,strlen(v.s)+1,0);
	perror("msgsnd");
}


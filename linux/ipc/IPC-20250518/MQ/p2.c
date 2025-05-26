#include"header.h"
struct msgbuf
{
	long mtype;//>0
	char s[10];
};
void main(int argc,char **argv)
{
	if(argc!=2){
	printf("Usage:./r mtype \n");
	printf("Ex:./r 2 \n");
	return;}
int id=msgget(5,IPC_CREAT|0664);
	if(id<0){
	perror("msgget");
	return;}
printf("id=%d\n",id);
//////////////////////////////////////
struct msgbuf v;
	printf("Before...\n");
	msgrcv(id,&v,sizeof(v),atoi(argv[1]),0);
	printf("After Data=%s\n",v.s);


}

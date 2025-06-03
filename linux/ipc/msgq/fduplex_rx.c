#include "header.h"
struct st{
	int roll;
	char name[20];
	float marks;
};
struct mymsg{
	long mtype;
	//char mtext[20];
	struct st stud;
};
int main(int argc, char** argv){
	if(argc!=2){
		printf("USAGE: ./a.out mtype\n");
		return 0;
	}
	struct mymsg v;
	int id = msgget(7,IPC_CREAT|0664);
	if(id<0){
		perror("msgget");
		return 0;
	}
	perror("msgget");
	//msgrcv(id, &v, sizeof(v.mtext), atoi(argv[1]), IPC_NOWAIT);
	msgrcv(id, &v, sizeof(v), atoi(argv[1]),0);
	perror("msgrcv");
	//printf("data rcvd: %s\n", v.mtext);
	printf("data rcvd:\n");

	printf("roll = %d\n", v.stud.roll);
	printf("name = %s\n", v.stud.name);
	printf("marks = %f\n", v.stud.marks);

	return 0;
}


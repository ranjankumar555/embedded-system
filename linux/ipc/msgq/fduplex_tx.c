#include "header.h"
struct st{
        int roll;
        char name[20];
        float marks;
};
struct msg{
	long mtype;
	//char mtext[20];
	struct st stud;
};
int main(int argc, char** argv){
	if(argc!=3){
		printf("USAGE: ./a.out mtype msg\n");
		return 0;
	}
	struct msg v;
	v.mtype = atoi(argv[1]);
	//strcpy(v.mtext, argv[2]);
	printf("enter roll, name, marks\n");
	scanf("%d %s %f", &v.stud.roll, v.stud.name,&v.stud.marks);

	int id;
	id = msgget(7,IPC_CREAT|0664);
	if(id<0){
		perror("msgget");
		return 0;
	}
	perror("msgget");

	msgsnd(id, &v, sizeof(v.stud)+1, 0);
	perror("msgsnd");


	return 0;
}

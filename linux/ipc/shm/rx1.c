#include "header.h"
struct st{
	int roll;
	char name[20];
	float marks;
};
int main(){
	int id = shmget(5, 50, IPC_CREAT|0664);
	struct st* stud;
	if(id<0){
		perror("shmget");
		return 0;
	}
	perror("shmget");

	//char *p = shmat(id, 0,0);
	stud = shmat(id, 0,0);
	if(stud<0){
		perror("shmat");
		return 0;
	}
	perror("shmat");

	printf("data rcvd: \n");
	printf("%d\t %s\t %f\n", stud->roll, stud->name, stud->marks);
	shmdt(stud);
	perror("shmdt");

	return 0;
}

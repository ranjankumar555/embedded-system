#include "header.h"
struct st{
	int roll;
	char name[20];
	float marks;
};
int main(){
	int id;
	struct st* stud;
	struct st* stud1;
	//char* p;
	id = shmget(5, 50, IPC_CREAT|0664);
	int id1 = shmget(6, 50,IPC_CREAT|0664);
	perror("shmget");
	if(id<0){
		perror("shmget");
		return 0;
	}
	perror("shmget");
	
	stud = shmat(id,0,0);
	stud1 = shmat(id,0,0);
	perror("shmat");
	if(stud<0){
		perror("shmat");
		return 0;
	}
	perror("shmat");

	//printf("enter data: ");
	//scanf("%s", p);
	while(1){
	printf("enter roll name and marks\n");
	scanf("%d %s %f", &stud1->roll, stud1->name, &stud1->marks);
	sleep(1);
	printf("data rcvd: \n");
        printf("%d\t %s\t %f\n", stud->roll, stud->name, stud->marks);
	}
	shmdt(stud);
	perror("shmdt");

	return 0;
}

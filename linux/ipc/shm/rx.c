#include "header.h"
struct st{
	int roll;
	char name[20];
	float marks;
};
int main(){
	int id = shmget(5, 50, IPC_CREAT|0664);
	int id1 = shmget(6, 50,IPC_CREAT|0664);
	struct st* stud;
	struct st* stud1;
	if(id<0){
		perror("shmget");
		return 0;
	}
	perror("shmget");

	//char *p = shmat(id, 0,0);
	stud = shmat(id, 0,0);
	stud1 = shmat(id, 0,0);
	if(stud<0){
		perror("shmat");
		return 0;
	}
	perror("shmat");
while(1){
	printf("data rcvd: \n");
	printf("%d\t %s\t %f\n", stud1->roll, stud1->name, stud1->marks);

	printf("client: enter data\n");
	scanf("%d %s %f", &stud->roll, stud->name, &stud->marks);
}
	shmdt(stud);
	perror("shmdt");

	return 0;
}

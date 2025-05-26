#include "header.h"
#include <sys/types.h>
#include <sys/wait.h>
int main(){
	int p[2];
	int ret = pipe(p);
	char str[20];
	//char str1[20];
	if(ret < 0){
		perror("pipe failed");
		exit(EXIT_FAILURE);
	}
	int r = fork();
	if(r){
		//parent
		printf("Enter name: ");
		scanf("%s", str);
		write(p[1], str, strlen(str)+1);
		printf("p done\n");
		wait(0);
	}
	else{
		//child
		printf("before : \n");
		read(p[0], str, sizeof(str));
		printf("after...\n");
		printf("name = %s\n", str);
		printf(" c done\n");
	}
}

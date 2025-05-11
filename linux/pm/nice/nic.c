#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
int main(){
	int i;
	printf("hello... pid = %d  ppid = %d\n", getpid(), getppid());
	
	while(1){
		;
	}
	return 0;
}

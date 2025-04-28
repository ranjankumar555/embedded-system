#include<stdio.h> 
#include<sys/types.h>
#include<unistd.h>
int main(){
	
	printf("Hello World, pid = %d and ppid = %d\n", getpid(), getppid());
	while(1);
	return 0;
}

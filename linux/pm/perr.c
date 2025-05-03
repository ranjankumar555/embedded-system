#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
int main(){
	
	FILE* fp;
	fp = fopen("data", "r");
	printf("Hello...\n");
	if(fp == 0){
		perror("fopen");
		printf("errno = %d ", ENOENT);
		return 1;
	}
	else{
		printf("file present\n");
	}
	return 0;
}

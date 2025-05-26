#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
void rev(char* p, char* q){
	char t;
	while(p<q){
		t = *p;
		*p = *q;
		*q = t;
		p++, q--;
	}
}

int main(){
	int p[2];
	char str[20];
	int r = pipe(p);
	if(r<0){
		perror("pipe");
		exit(EXIT_FAILURE);
	}

	int r1 = fork();
	if(r1){
		//parent
		printf("Enter string: ");
		scanf("%s", str);
		write(p[1], str, strlen(str)+1);
		sleep(5);
		read(p[0], str, sizeof(str));
		printf("reverse string  = %s\n", str);
		printf("P done\n");
		wait(0);
	}
	else{
		char str1[20];
		printf("Reading from pipe...\n");
		read(p[0], str, sizeof(str));
		rev(str, str+strlen(str) -1);
		write(p[1], str, strlen(str)+1);
		printf("c done\n");
	}
}

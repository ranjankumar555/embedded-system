#include "header.h"
int main(){

	int fd1, fd2;
	char s[20];

	fd1 = open("f1", O_RDWR);
	perror("open_1");

	fd2 = open("f2", O_RDWR);
	perror("open_2");

	if(fork() == 0){
		//child reading fifo2
		while(1){
			read(fd2, s, sizeof(s));
			printf("c1 read: %s\n", s);
		}
	}
	else{
		// parent writing fifo 1
		while(1){
			printf("P1: enter data\n");
			scanf("%s", s);
			write(fd1, s, strlen(s)+1);
		}
	}
}

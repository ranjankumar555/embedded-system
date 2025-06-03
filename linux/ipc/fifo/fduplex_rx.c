#include "header.h"
int main(){

	int fd1, fd2;
	char s[20];

	mkfifo("f1", 0664);
	mkfifo("f2", 0664);

	fd1 = open("f1", O_RDWR);
	perror("open1");

	fd2 = open("f2", O_RDWR);
	perror("open2");

	if(fork()==0){

		//child reading fifo 1
		while(1){
			read(fd1, s, sizeof(s));
			printf("c1: data read\n");
			printf("c1: %s\n",s);
		}
	}
	else{
		// parent writing fifo 2
		while(1){
			printf("p2: enter data\n");
			scanf("%s",s);
			write(fd2, s, strlen(s)+1);
		}
	}
	close(fd1);
	close(fd2);
}

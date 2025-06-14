#include "header.h"
int main(){
	mkfifo("f1", 0666);
	mkfifo("f2", 0666);
	perror("mkfifo");

	char s[20];

	int fd1 = open("f1", O_RDWR);
	perror("fd1");
	int fd2 = open("f2", O_RDWR);
	perror("fd2");
	
	printf("enter string: ");
	scanf("%s", s);

	write(fd1, s, strlen(s)+1);
	read(fd2, s, sizeof(s));

	printf("Modified string: %s\n", s);

	return 0;
}


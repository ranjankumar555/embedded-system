#include "header.h"
int main(){

	int r = mkfifo("f1", 0664);
	if(r<0){
		perror("mkfifo");
	}
	printf("r = %d\n", r);
	int fd = open("f1", O_WRONLY);
	if(fd<0){
		perror("open");
	}
	char s[10];
	printf("enter data: ");
	scanf("%s", s);
	write(fd, s, strlen(s)+1);

	return 0;
}


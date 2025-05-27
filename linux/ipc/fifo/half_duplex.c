#include "header.h"
int main(){
	
	int r = mkfifo("f1", 0664);
	if(r<0){
		perror("mkfifo");
	}
	int r2 = mkfifo("f2", 0664);
	if(r2<0){
		perror("mkfifo");
	}
	char s[20];
	int fd = open("f1", O_WRONLY);
	int fd1 =open("f2", O_RDONLY);
	while(1){
	printf("enter data(server): ");
	scanf("%s", s);
	write(fd, s, strlen(s)+1);
	printf("data transmitted: %s\n", s);
	read(fd1, s, strlen(s)+1);

	printf("data received: %s\n", s);
	}

	return 0;
}

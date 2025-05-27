#include "header.h"
int main(){
//	char s[10];  // string
	int s;	// int	
	int fd = dup(0);
	if(fd<0){
		perror("dup failed");
		exit(EXIT_FAILURE);
	}
	printf("fd = %d\n", fd);
	read(fd, &s, sizeof(s));
	printf("scanned data: ");
	write(fd, &s, sizeof(s));
	return 0;
}

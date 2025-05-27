#include "header.h"
void convert(char* s){
	for(int i= 0; i<s[i]; i++){
		s[i]^=32;
	}
}

int main(){

	char s[20];
	int fd = open("f1", O_RDONLY);
	int fd1 = open("f2", O_WRONLY);
	if(fd<0){
		perror("open");
		return 0;
	}
	if(fd1<0){
		perror("open");
		return 0;
	}
	
	while(1){
	read(fd, s, sizeof(s));
	printf("data received = %s\n", s);

//	convert(s);
	printf("enter message: ");
	scanf("%s", s);
	write(fd1, s, strlen(s)+1);
	}
	return 0;
}


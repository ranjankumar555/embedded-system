#include "header.h"
void remdup(char *);
int main(){
//	mkfifo("f1", 0666);
//	mkfifo("f2", 0666);
//	perror("mkfifo");

	char s[20];

	int fd1 = open("f1", O_RDWR);
	perror("fd1");
	int fd2 = open("f2", O_RDWR);
	perror("fd2");
	
//	printf("enter string: ");
//	scanf("%s", s);

	read(fd1, s, sizeof(s));
	printf("str rcvd from p1: %s\n", s);
	remdup(s);
	write(fd2, s, strlen(s)+1);

	printf("Modified string: %s\n", s);

	return 0;
}

void remdup(char* p){
	char visit[127] = {0};
	char *q = p;
	while(*p){
		if(!visit[*p]){
			visit[*p] = 1;
			*q = *p;
			q++;
		}
		p++;
	}
	*q = *p;
}

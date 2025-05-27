#include "header.h"
void convertToUpper(char *);
int main(){
	
	int p[2], q[2];
	int r1 = pipe(p);
	if(r1<0){
		perror("pipe");
		exit(EXIT_FAILURE);
	}
	
	int r2 = pipe(q);
	if(r2<0){
		perror("pipe2");
		exit(EXIT_FAILURE);
	}

	if(fork() == 0){
		// child
		char s[20];
		read(p[0], s, sizeof(s));
		printf("In C...\n");
		convertToUpper(s);
		write(q[1], s, strlen(s) + 1);
		printf("C done...\n");
	}
	else{
		// parent
		printf("In p...\n");
		char s[20];
		printf("enter string: ");
		scanf("%s", s);
		write(p[1], s, strlen(s)+1);
		read(q[0], s, sizeof(s));
		printf("In parent, string changed  = %s\n", s);
		printf("P done...\n");
	}
}
void convertToUpper(char *p){
	while(*p){
		if(*p>= 'a' && *p<= 'z'){
			*p^= 32;
		}
		p++;
	}
}

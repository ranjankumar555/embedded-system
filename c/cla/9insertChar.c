#include<stdio.h>
#include<stdlib.h>
int mystrlen(char*);
void mystrcpy(char*, char*);
int main(int argc, char** argv){
	if(argc != 4){
		printf("USAGE: ./a.out str int char\n");
		return 1;
	}

	char p[20];
	mystrcpy(p, *(argv+1));
	int len = mystrlen(p);
	int index = atoi(*(argv + 2));
	while(len>=index){
		*(p+len+1) = *(p+len);
		len--;
	}
	*(p+index) = *(*(argv+3)+0);

	printf("after insert: %s\n", p);

	return 0;
}

void mystrcpy(char* d, char* s){
	while(*s){
		*d = *s;
		s++;
		d++;
	}
	*d = '\0';
}

int mystrlen(char* s){
		int i=0;
		while(*(s+i)){
			i++;
		}
		return i;
}

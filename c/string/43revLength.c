#include<stdio.h>
void reverse(char*, char*);

int main(int argc, char** argv){
	if(argc != 2){
		printf("USAGE: %s <string> \n", argv[0]);
		return 1;
	}
	char *p = argv[1];
	char *q = p;
	int count = 0, flag = 0;

	while(*p){
		if(*p != ' '){
			count++;
		}
		else{
			if(count>4){
				q = p-count;
				reverse(q,p-1);
			}
			count = 0;
		}
		p++;
	}
	if(count>4){
		q = p - count; 
		reverse(q, p-1);
	}

	printf("%s\n", argv[1]);
	return 0;
}
void reverse(char* p, char* q){
	char t;
	while(p<q){
		t = *p;
		*p = *q;
		*q = t;

		p++;
		q--;
	}
}



#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void reverse(char*, char*);
char* isLastword5(char*);
int main(int argc, char** argv){
	if(argc!=2){
		printf("usage: ./a.out filename\n");
		return 1;
	}
	FILE* fp = fopen(argv[1], "r+");
	if(fp == 0){
		printf("file not present\n");
		return 1;
	}
	int len;
	char* str;
	char *s = malloc(50), *temp;
	while(str = fgets(s, 50, fp)){
		len = strlen(s);
		if(temp = isLastword5(s)){
			reverse(temp, temp+4);
			fseek(fp, -len, SEEK_CUR);
			fputs(s, fp);
		}
	}
	return 0;
}
char* isLastword5(char *p){
	char *startptr=p;
	while(*p){
		if(*p == ' '){
			startptr = p+1;
		}
		p++;
	}
	int len = strlen(startptr);
	if(len==6){
		return startptr;
	}else{
		return NULL;
	}
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

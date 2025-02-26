#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void my_strcpy(char* d, char* s, char *p);
int main(int argc, char** argv){
	if(argc!=4){
		printf("Usage: \n");
		return 1;
	}
	FILE* fp = fopen(argv[1], "r+");
	if(fp == 0){
		printf("file not present\n");
		return 1;
	}
	char *p;
	char s[100];
	int sub = strlen(argv[2]);
	int replace = strlen(argv[3]);
	int shift;
	if(replace > sub) shift = replace - sub;

	int n;
	while(fgets(s,100, fp)){
		n = strlen(s);

		if(p = strstr(s,argv[2])){
			
			my_strcpy(s+n+shift+1, s+n, p);
			
			strcpy(p, argv[3]);
			fseek(fp, -n, 1);
			fputs(s, fp);
		}

	}
	return 0;
}
void my_strcpy(char* d, char* s, char *p){
	while(s!=p){
		*d = *s;
		d--;
		s--;
	}
}

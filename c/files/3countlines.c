#include<stdio.h>
#include<stdlib.h>
int main(int argc, char** argv){
	if(argc != 2){
		printf("USAGE: ./a.out filename...\n");
		return 1;
	}
	FILE* fp;
	fp = fopen(argv[1], "r");
	if(fp == NULL){
		printf("file not present...\n");
		return 1;
	}
	/* Finding longest line length */
	int len = 0, len1 = 0;
	char ch;
	while((ch=fgetc(fp)) != EOF){
		len++;
		if(ch == '\n'){
			if(len>len1){
				len1 = len;
			}
			len=0;
		}
	}
	rewind(fp);
	
	// allocating memory dynamically of size len1;
	char* s = malloc(len1+1);
	int c=0;
	while(fgets(s,60, fp)){
		c++;
	}
	printf("No of line  = %d\n", c);
	return 0;
}

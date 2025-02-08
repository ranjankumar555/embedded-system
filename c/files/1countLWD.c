#include<stdio.h>
#define ISDIGIT(x) x>='0' && x <= '9'
int main(int argc, char** argv){
	if(argc != 2){
		printf("USAGE: ./a.out fileName\n");
		return 1;
	}
	FILE* fp;
	fp = fopen("data.txt", "r");
	if(fp == 0){
		printf("file not present...\n");
		return 1;
	}

	char ch;
	int flag = 0;
	int l =0, w=0, d = 0; 
	while((ch=fgetc(fp)) != EOF){
		if(ch == '\n'){
			l++;
		}
		if((ch == ' ' || ch == '\n')){
			w++;
		}
		if(ISDIGIT(ch)){
			d++;
			
		}
		
	}
	printf("no of line = %d\n", l);
	printf("word = %d\n", w);
	printf("digit = %d\n", d);
	
	fclose(fp);
	return 0;
}
// this program assumes only one space between word //

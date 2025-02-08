#include<stdio.h>
int main(int argc,char** argv){
	if(argc!=2){
		printf("USAGE: ./a.out filename\n");
		return 1;
	}

	FILE* fp;
	char ch;
	fp = fopen(argv[1], "r+");
	if(fp == NULL){
		printf("File not present\n");
		return 1;
	}

	while((ch = fgetc(fp)) != EOF){
		if((ch>='a'&& ch<= 'z') || (ch>='A' && ch<='Z'))
		{
			ch = ch^32;
			fseek(fp, -1, 1);
			fputc(ch, fp);
		}
	}
	
	return 0;

}

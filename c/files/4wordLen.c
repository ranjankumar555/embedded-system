#include<stdio.h>
#include<stdlib.h>
int wordcount(const char*);
int main(){
	FILE* fp = fopen("data.txt","r");
	char* s = malloc(20);
	while(fscanf(fp, "%s", s)!= EOF){
		printf("%d ",wordcount(s));
	}
	printf("\n");
	fclose(fp);

	return 0;
}

int wordcount(const char* p){

	int count = 0;
	while(*p){
		count++;
		p++;
	}
	return count;
}


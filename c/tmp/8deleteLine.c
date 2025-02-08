#include<stdio.h>
#include<stdlib.h>
int main(int argc, char** argv){
	if(argc!=3){
		printf("USAGE: \n");
		return 1;
	}
	FILE* fp;
	fp = fopen(argv[1], "r+");
	char s[100], *p;
	int c= 0, n;
	n = atoi(argv[2]);
	while(p = fgets(s, 100, fp)){
		c++;
		if(c!=n){
			fseek(fp, -1, 1);
			fputs(s,fp);
		}
	}
	printf("Line deleted sucessfully\n");
	return 0;
}

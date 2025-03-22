#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void revstr(char *p, char *q){
	char t;
	while(p<q){
		t = *p;
		*p = *q;
		*q = t;
		p++;
		q--;
	}
}
char* islastword5(char* str){
	int l;
	char* p = str;
	while(*str){
		if(*str == ' '){
			p = str+1;
		}
		str++;
	}

	l = strlen(p);
	if(l == 6){
		return p;
	}
	else{
		return 0;
	}
}


int main(int argc, char** argv){
	FILE* fp = fopen(argv[1], "r+");

	char* s = malloc(100);
	char *temp;
	int len;
	while(fgets(s, 100, fp)){
		len  = strlen(s);
		if(temp = islastword5(s)){
			revstr(temp, temp+4);
			fseek(fp, -len, 1);
			fputs(s, fp);
		}
	}
	return 0;
}


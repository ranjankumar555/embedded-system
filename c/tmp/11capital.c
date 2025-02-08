#include<stdio.h>
void capital(char *);
void upper(char *);
int main(){
	FILE* ip = fopen("input.txt", "r");
	FILE* op = fopen("output.txt", "w");

	if(!ip && !op){
		printf("File not present\n");
		return 1;
	}
	char s[100];
	while(fgets(s, 100, ip)){
		capital(s);
		fputs(s, op);
	}

	fclose(ip);
	fclose(op);

	return 0;
}

void capital(char *p){
	int flag =1, count = 0;
	char* q = p;
	while(*p){
		if(*p != ' '){
			count++;
		}
		else{
			if(count>0){	
				upper(q);
				upper(p-1);
			}
			q = p + 1;
			count = 0;
		}
		p++;
	}	
	if(count>0){
		upper(q);
		upper(p-2);
	}
	printf("%d %d\n", *p, *(p-2));

}
void upper(char* ch){
	if(*ch>='a' && *ch<= 'z'){
		*ch = *ch^32;
	}
}



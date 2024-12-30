#include<stdio.h>
void reverse(char*, char*);
int main(){
	char s[20];
	char *p = s, *start =  NULL;
	
	printf("enter the string: ");
	scanf("%[^\n]s", s);

	while(*p){
		if(*p == ' '){
			start = p;
		}
		p++;
	}

	reverse(start+1, p-1);

	printf("%s\n", s);

	return 0;
}
void reverse(char* p, char *q){
	char temp;
	while(p<q){
		temp = *p;
		*p = *q;
		*q = temp;

		p++;
		q--;
	}
}

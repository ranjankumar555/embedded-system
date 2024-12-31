#include<stdio.h>
#define print printf("%s\n", s);
int main(){
	char s[20];
	printf("enter string: ");
	scanf("%[^\n]s", s);

	char *p = s, *q = s;
	int flag = 0;

	while(*p){
		if(*p != ' '){
			*q++ = *p;
			flag = 1;
		}
		if(*p == ' ' && flag){
			*q++ = ' ';
			flag=0;
		}
		p++;
	}
	*q = '\0';
	print;

	return 0;
}


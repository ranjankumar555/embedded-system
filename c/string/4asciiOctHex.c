#include<stdio.h>
int main(){
	char s[10];
	printf("Enter the string: ");
	scanf("%s", s);
	char *p = s;
	while(*p){
		printf("%c --> %d\t %o\t %x\n",*p, *p, *p, *p);
		p++;
	}
	return 0;
}


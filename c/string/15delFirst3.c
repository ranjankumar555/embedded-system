#include<stdio.h>
int main(){
	char s[20],ch;
	printf("Enter string: ");
	scanf("%s", s);

	char *p = s;
	char* q = s;
	p = p+3;
	while(*p){
		*q++ = *p;
		p++;
	}
	*q = '\0';
	printf("After deletion: %s\n", s);
	return 0;
}

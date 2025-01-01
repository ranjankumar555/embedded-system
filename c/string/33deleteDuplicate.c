#include<stdio.h>

int main(){
	char s[20];
	printf("enter string: ");
	scanf("%[^\n]s", s);
	char *p, *q;
	p=q=s;

	char visit[127] = {0};

	while(*p){
		if(!visit[*p]){
			*q++ = *p;
			visit[*p] = *p;
		}
		p++;
	}
	*q = '\0';

	printf("%s\n", s);
	
	return 0;
}

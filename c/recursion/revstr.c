#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void revstr(char* p){
	static char *q = NULL;
	if(q==NULL){
		q =p + strlen(p)-1;
	}
	char t;
	if(p<q){
		t = *p;
		*p = *q;
		*q = t;
		q--;
		revstr(p+1);
	}
}

int main(){
	char *s = (char*)malloc(sizeof(char)*20);
	printf("enter string: ");
	scanf("%[^\n]s",s);

	printf("before: %s\n", s);
	revstr(s);
	printf("After: %s\n", s);

	return 0;
}
	


#include<stdio.h>
int main(){
	char *p;
	printf("enter string: ");
	scanf("%s",p);
	char *q = p;
	printf("string copied to another buffer: %s\n",q);
	return 0;
}

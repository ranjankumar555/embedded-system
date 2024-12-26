#include<stdio.h>
int main(){
	char s[30];
	printf("enter string: ");
	scanf("%[^\n]s",s);
	printf("string = %s\n", s);
	return 0;
}	

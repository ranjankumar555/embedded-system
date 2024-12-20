#include<stdio.h>

int _strlen(const char*);

int main(){
	char ch[30];
	printf("Enter the string: ");
	scanf("%s", ch);

	int len = _strlen(ch);

	printf("length = %d\n", len);

	return 0;
}

int _strlen(const char* s){
	int c = 0;
	while(*s){
		c++;
		s++;
	}
	return c;
}

#include<stdio.h>
int main(){
	char s[20], *p;
	printf("Enter string: ");
	scanf("%s", s);
	p = s;
	
	int count =0; 
	while(*p){
		count++;
		p++;
	}
	printf("length = %d\n", count);

	return 0;
}

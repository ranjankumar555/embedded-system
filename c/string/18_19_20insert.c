#include<stdio.h>
int main(){
	char s[20], ch;
	int i, pos,len;
	printf("enter the string: ");
	scanf("%s",s);
	printf("enter character: ");
	scanf(" %c",&ch);
	
	printf("enter the pos: ");
	scanf("%d", &pos);

	for(len =0; s[len]; len++);

	for(i=len; i>=2; i--){
		*(s+i+1) = *(s+i);
	}
	*(s+pos) = ch;

	printf("string after insertion = %s\n", s);

	return 0;
}

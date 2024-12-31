#include<stdio.h>
#include "palindrome.h"
int main(){
	char s[20], t[20];
	printf("Enter string: ");
	scanf("%s", s);
	mystrcpy(t,s);
	reverse(s);
	int flag = mystrcmp(s, t);
	if(!flag){
		printf("Yes, Palindrome\n");
	}
	else{
		printf("Not Palindrome\n");
	}

	return 0;
}


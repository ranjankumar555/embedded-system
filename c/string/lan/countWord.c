#include<stdio.h>
int countWord(char *str){
	int count = 0;
	while(*str){
		if(*str==' ') count++;
		str++;
	}
	return count+1;
}
int main(){
	char s[50];
	printf("Enter string: ");
	scanf("%[^\n]s", s);
	printf("No. of word = %d\n",countWord(s));
	return 0;
}

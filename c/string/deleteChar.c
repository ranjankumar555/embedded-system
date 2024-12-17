#include<stdio.h>
#include<string.h>

int count(char* str, char ch){
	char c;
	while(*str){
		if(*str == ch){
			c++;
		}
		str++;
	}
	return c;
}
int main(){
	char s[20];
	char ch;
	printf("Enter string: ");
	scanf("%s",s);
	printf("Enter char: ");
	scanf(" %c",&ch);
	
	char* p= NULL;
	int n = count(s,ch);
	while(n--){
		p = strchr(s,ch);
		strcpy(p, p+1);
	}
	printf("After deletion of %c: %s\n",ch,s);
	return 0;
}


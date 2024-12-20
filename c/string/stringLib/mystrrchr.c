#include<stdio.h>

const char* mystrchr(const char*, const char);

int main(){
	char s[20];
	char ch;
	printf("Enter string: ");
	scanf("%s", s);
	printf("Enter char: ");
	scanf(" %c", &ch);
	printf("string starting address = %p\n", s);
	const char *p = mystrchr(s, ch);
	if(p)
		printf("%c is found at %p",ch,p);
	else
		printf("%c is not found",ch);
	printf("\n");
	return 0;
}

const char* mystrchr(const char* str, const char ch){
	int i, len;
	for(len = 0; *(str+len); len++);
	for(i = len-1; i>=0; i--){
		
		if(str[i] == ch){
			return str+i;
		}
	}
	return NULL;
}

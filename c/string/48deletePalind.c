#include<stdio.h>

void deletePalindrome(char* );
int isPalindrome(char*, char*);
void mystrcpy(char*, char*);

int main(){
	char s[20];
	printf("enter string: ");
	scanf("%[^\n]s", s);
	deletePalindrome(s);

	printf("%s\n", s);
	return 0;
}

void deletePalindrome(char* p){
	int count=0;
	char* q = p;

	while(*p){
		if(*p != ' '){
			count++;
		}
		else{
			q = p-count;
			if(isPalindrome(q,p-1)){
				mystrcpy(q,p+1);
				p = q;
			}
			count =0;
		}
		p++;
	}
	q = p-count;

	if(isPalindrome(q,p-1)){
		mystrcpy(q,p-1);
	}
}

int isPalindrome(char* s1, char* s2){
	
	while(s1<s2){
		if(*s1 != *s2){
			return 0;
		}
		s1++;
		s2--;
	}
	return 1;
}

void mystrcpy(char* d, char* s){
	while(*s){
		*d = *s;
		d++;
		s++;
	}
	*d = '\0';
}

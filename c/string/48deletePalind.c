#include<stdio.h>
#include<string.h>
void deletePalindrome(char* );
int isPalindrome(char*, char*);
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
				strcpy(q,p+1);
			}

			count =0;
		}
		p++;
	}
	q = p-count;

	if(isPalindrome(q,p-1)){
		strcpy(q,p-1);
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





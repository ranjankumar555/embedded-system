#include<stdio.h>
int countVowel(const char*);
int main(){
	char s[20];
	int count;
	printf("enter string: ");
	scanf("%[^\n]s", s);

	count = countVowel(s);

	printf("count = %d\n", count);

	return 0;
}

int countVowel(const char* p){
	int count =0;
	char ch;
	do{	
		ch = *p;
		if(ch>='A' && ch <= 'Z'){ // to deal in lowercase
			ch = ch^32;
		}
		if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
			count++;
		}
		p++;
	}while(*p);

	return count;
}

#include<stdio.h>
#define ISDIGIT(x) x>='0' && x<='9'
void revWord(char*);
int countWord(char *);
void reverse(char *, char*);

int main(){
	char str[30];
	printf("Enter string: ");
	scanf("%[^\n]s", str);

	revWord(str);
	int count  = countWord(str);

	printf("reversed word = %s\n",str);
	printf("word count = %d\n", count);

	return 0;
}

void revWord(char* s){
	char *p = s;
       	int count =0;

	while(*s){
		if(*s!=' '){
			count++;
		}
		else{
			p = s-count;
			reverse(p,s-1);
			count=0;
		}
		s++;
	}
	//for last word
	p = s-count;
	reverse(p,s-1);
}
 
int countWord(char *p ){
	int count = 0, flag = 0;
	while(*p){
		if(ISDIGIT(*p)){
			flag = 1;
		}
		else if(*p == ' ' && flag){
			count++;
			flag = 0;
		}
		p++;
	}
	//for last word
	if(flag) count++;
	return count;
}

void reverse(char* p, char* q){
	char temp;
	while(p<q){
		temp = *p;
		*p = *q;
		*q = temp;

		p++;
		q--;
	}
}

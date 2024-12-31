#include "palindrome.h"
void reverse(char* p){
	int n = mystrlen(p);
	char *q = p+n-1;
	char temp;
	while(p<q){
		temp = *p;
		*p = *q;
		*q = temp;

		p++;
		q--;
	}

}
int mystrlen(const char* str){
	int i=0;
	while(*str){
		i++;
		str++;
	}
	return i;
}

int mystrcmp(const char* s,  const char* d){
	int i;
	for(i=0; s[i]; i++){
		if(s[i] != d[i]){
			return s[i] - d[i];
		}
	}
	return s[i] - d[i];
}

void mystrcpy(char* d, const char* s){
	int i;
	for(i=0; s[i]; i++){
		d[i] = s[i];
	}
	d[i] = '\0';
}

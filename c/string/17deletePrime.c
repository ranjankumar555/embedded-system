#include<stdio.h>
int isPrime(int);
int main(){
	char s[20];
	printf("enter the string: ");
	scanf("%[^\n]s", s);
	char *p = s;
	char *q = s;

	while(*p){
		if((*p >='0' && *p <= '9') && isPrime(*p - '0')){;}
		else{
			*q++ = *p;
		}
		p++;
	}
	*q = '\0';

	printf("After deleting digit = %s\n", s);

	return 0;
}
int isPrime(int n){
	int i;
	for(i =2; i<n; i++){
		if(n%i == 0){
			break;
		}
	}
	if(i == n){
		return 1;
	}
	else{
		return 0;
	}
}

#include<stdio.h>
int main(){
	char s[20],t, *p = s,*q = NULL;
	printf("Enter the string: ");
	scanf("%[^\n]s", s);
	int len,n;
	printf("enter n: ");
	scanf("%d", &n);
	for(len =0; *(p+len); len++);
	q = p + n-1;

	while(p<q){
		t = *p;
		*p =*q;
		*q = t;
		p++;
		q--;
	}
	printf("after reverse = %s\n",s);
	return 0;
}

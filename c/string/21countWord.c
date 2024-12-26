#include<stdio.h>
int main(){
	char s[50], count  =0, c=1;
	char *p = s;

	printf("enter string: ");
	scanf("%[^\n]s", p);

	while(*p){
		if((*p == ' ' || *(p+1) == '\0') && c==1){
			count++;
			c=0;
		}
		p++;
		if(*p != ' '){
			c=1;
		}
	}
	printf("word count = %d\n", count);
}

#include<stdio.h>
int main(){
	char s[20];
	char *p = s;
	int count =0;
	printf("enter the string: ");
	scanf("%[^\n]s", s);

	while(*p){
		if(*p >= '0' && *p <= '9'){
			count++;
		}
		p++;
	}
	printf("count = %d\n",count);
	return 0;
}

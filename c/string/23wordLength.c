#include<stdio.h>
int main(){
	char s[20],count =0;
	printf("enter the string: ");
	scanf("%[^\n]", s);

	char* p = s;

	while(*p){
		if(*p != ' '){
			count++;
		}
		else{
			printf("%d ", count);
			count =0;
		}
		p++;
	}
	printf("%d\n",count);
	return 0;
}

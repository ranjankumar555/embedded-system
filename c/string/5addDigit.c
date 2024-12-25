#include<stdio.h>
int main(){
	char str[20];
	char *p = str;
	printf("Enter the string: ");
	scanf("%[^\n]s", str);
	int sum =0;
	
	printf("string = %s\n", p);
	while(*p){
		if(*p>='0' && *p<='9'){
			sum = sum + *p-'0';
		}
		p++;
	}
	printf("sum = %d\n", sum);
	return 0;
}

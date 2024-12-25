#include<stdio.h>
int main(){
	char s[20];
	char* p = s;
	printf("Enter string: ");
	scanf("%[^\n]s", p);

	while(*p){
		printf("%c -> ", *p);
		for(int i =31; i>=0; i--){
		       printf("%d", *p>>i & 1);
		}
 		printf("\n");
		p++;
	}
	return 0;
}

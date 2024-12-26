#include<stdio.h>
void capitalize(char*);

int main(){
	char s[30];
	int flag =1;
	
	printf("Enter string: ");
	scanf("%[^\n]s", s);

	char *p = s;
	
	capitalize(p);
	while(*p){

		if(*p == ' ' && flag){
			capitalize(p+1);
			flag = 0;
		}
		p++;
		if(*p!=' '){ 
			flag = 1;}
	}
	printf("str = %s\n",s);
	return 0;
}
void capitalize(char *str){
	if(*str >='a' && *str <= 'z'){
		*str = *str^32;
	}
}


#include<stdio.h>
void reverse(char*, char*);

int main(){
	char s[20];	
	char *p = s; 
	int j =0, flag =1, space =0;

	printf("Enter the string: ");
	scanf("%[^\n]", s);

	while(*p && flag){
		if(*p != ' '){
			j++;
			if(*(p+1) == ' '){
				flag =0;
			}
		}
		else{
			space++; // To encounter testcase such as "   vector india"
		}
		p++;
	}

	reverse(s+space, s+space + j-1);
	printf("%s\n", s);

	return 0;
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

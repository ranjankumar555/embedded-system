#include<stdio.h>
int main(){
	char s[20],ch;
	printf("Enter string: ");
	scanf("%s", s);
	printf("Enter char to be deleted: ");
	scanf(" %c", &ch);

	char *p = s;
	/*** brute force ***
	char *q = NULL;
	while(*p){
		if(*p == ch){
			q =p;
			while(*q){
				*q = *(q+1);
				q++;
			}
			p--;
		}
		p++;
	}
	p=q=NULL;
	printf("After deletion: %s\n", s);
	*/

	/*** optimised ***/
	//int i=0;
	char* q = s;
	while(*p){
		if(*p != ch){
			*q++ = *p;
		}
		p++;
	}
	*q = '\0';
	printf("After deletion: %s\n", s);
	return 0;
}



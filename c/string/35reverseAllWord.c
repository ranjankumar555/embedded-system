#include<stdio.h>
void reverse(char*, char*);
int main(){
	char s[20];
	printf("Enter the string: ");
	scanf("%[^\n]", s);

	char *p, *q;
	p = q = s;

	while(*q){
		if(*q == ' '){
			reverse(p, q-1);
			p = q+1;
		}
		q++;
	}
	reverse(p,q-1);
	printf("%s\n", s);
	return 0;
}

void reverse(char *p, char *q){
	char temp;
	while(p<q){
		temp = *p;
		*p = *q;
		*q = temp;

		p++;
		q--;
	}
}

/* output perspective program is working correct
 * but, there is an internal bug identified when two or more 
 * space in between two word 
 */

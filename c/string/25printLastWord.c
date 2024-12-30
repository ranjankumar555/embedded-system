/* Approach
 * 1. traverse through the string
 * 2. print last word as soon as loop terminates
 */

#include<stdio.h>
int main()
{
	char s[20];
	char temp[20];
	printf("Enter string: ");
	scanf("%[^\n]", s);
	char *p = s;
	int j=0;
	while(*p){
		if(*p != ' '){
			temp[j++] = *p;
		}
		else{
			j=0;
		}
		p++;
	}
	temp[j] = '\0';
	printf("%s\n",temp);

	return 0;
}


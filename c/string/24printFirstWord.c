#include<stdio.h>
int main(){
	char s[50],flag =1;
	printf("enter string: ");
	scanf("%[^\n]", s);

	char *p=s;

	while(*p && flag){
		if(*p != ' '){
			printf("%c", *p);
			if(*(p+1) == ' ' || *(p+1) == '\0'){ // waiting for ' ' and '\0' 
				flag = 0; // as soon as encounter ' ' and '\0' loop terminates
			}
		}
		p++;
	}
	printf("\n");
	return 0;
}

/* we can also sove it by finding length of first word, but time complexity will be more.
 * In that approach, finding length of first word takes one loop and then printing that word char by char takes another loop
 * so we are using two loop to complete that task.
 *
 * Improvement: using one loop we can complete this task as I did above
 */

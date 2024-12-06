#include<stdio.h>
int main(){
	char a[20];
	printf("Enter string: ");
	scanf("%s",a);
	int i;
	int alpha = 0, d = 0, sp = 0;
	for(i=0; a[i]; i++){
		if(a[i] >= 'A' && a[i] <= 'Z' || a[i] >='a' && a[i] <='z'){
			alpha++;
		}
		else if(a[i] >='0' && a[i] <= '9')
			d++;
		else
			sp++;
		}
	printf("Alphabet = %d\n",alpha);
	printf("Digit = %d\n",d);
	printf("Special character = %d\n",sp);
	
	return 0;
}

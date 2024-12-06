/*********************************************************************************
3. WAP to reverse the bits of given character.
Example: 
i/p char is ‘O’ // ascii is 79
It’s binary : 0100 1111
After reverse : 1111 0010 
*********************************************************************************/
#include<stdio.h>
int main(){
	unsigned char ch;
	printf("Enter Character: ");
	scanf("%c", &ch);
	
	printf("Binary: ");
        for(int i=7; i>=0; i--){
		printf("%d", ch>>i&1);
                if(i%4==0)
                        printf(" ");
        }
        printf("\n");
	int m,n;
	for(int i=0,j=7; i<j; i++, j--){
		m = ch>>i&1;
		n = ch>>j&1;
		if(m!=n){
			ch = ch^1<<i;
			ch = ch^1<<j;
		}
	}
	printf("After swap: ");
	for(int i=7; i>=0; i--){
		printf("%d", ch>>i&1);
		if(i%4==0)
			printf(" ");
	}
	printf("\n");
	return 0;
}

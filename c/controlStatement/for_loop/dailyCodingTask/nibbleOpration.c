/*******************************************************************************
8. WAP to set 1st nibble ,clear 2nd nibble ,
toggle 3rd nibble without loop.

Ex. i/p unsigned short int k=0xA5F0
It’s binary : 1010 0101 1111 0000
o/p binary : 1010 1010 0000 1111
 ********************************************************************************/
#include<stdio.h>
int main(){
	unsigned short int num;
	printf("Enter the number: ");
	scanf("%hx", &num);
	printf("Binary representation: ");
	for(int i=15; i>=0; i--){
		printf("%d", num>>i&1);
		if(i%4==0)
			printf(" ");
	}
	printf("\n");

	int set1stNibble = (num & 0xf) | 0xf;
	int clear2ndNibble = (num & 0xf0) & ~0xf0;
	int toggle3rdNibble = (num & 0xf00) ^ 0xf00;

	num = (num & 0xf000) | set1stNibble | clear2ndNibble | toggle3rdNibble;

	printf("Number after set, clear and toggle nibble: ");
	for(int i=15; i>=0; i--){
		printf("%d", num>>i&1);
		if(i%4==0)
			printf(" ");
	}
	printf("\n");
}



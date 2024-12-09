/**************************************************************************
6. WAP to delete no of bit from particular position in given number .

Example: i/p num = 511 , bit = 4 , pos =2
00000000 00000000 00000001 11111111

after deleting 4 bit fron 2nd pos .
00000000 00000000 00000000 00011111
***************************************************************************/

#include<stdio.h>
int main(){
	
	int num,pos, bitDelete;
	printf("Enter number: ");
	scanf("%d", &num);

	printf("Enter number of bits to be deleted: ");
	scanf("%d", &bitDelete);

	printf("Enter postion(0-31): ");
	scanf("%d", &pos);
	
	printf("Binary representation of %d: ", num);

	for(int i=31; i>=0; i--){
		printf("%d", num>>i&1);
	}
	printf("\n");

	int mask = (1<<pos)-1;
	int maskedBit = num & mask;

	num = num >> pos + bitDelete;
	num = num << pos;

	num = num|maskedBit;

	printf("Num after deleting %d from position %d: ", pos, bitDelete);

	for(int i=31; i>=0; i--){
		printf("%d", num>>i&1);
	}
	printf("\n");

	return 0;
}

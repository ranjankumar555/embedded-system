//print the binary of 32bit integer
#include<stdio.h>
void main(){
	int num, bit;
	printf("Enter Number: ");
	scanf("%d", &num);

	for(int i = 31; i>=0; i--){
		bit = num>>i&1;
		printf("%d",bit);
	}
	printf("\n");
}


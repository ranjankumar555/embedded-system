/*******************************************************************************
  7. WAP to reverse 1st 6bit to last 6 bit .
  Ex. i/p int n = 995;
  00000000 00000000 00000011 11100011

  after reversing 6 bit only
  11000100 00000000 00000011 11000000
 ********************************************************************************/
#include<stdio.h>
int main(){
	int num, pos;
	printf("Enter the number: ");
	scanf("%d", &num);
	printf("Enter number of bits to reverse : ");
	scanf("%d", &pos);
	printf("Binary representation: ");
	for(int i=31; i>=0; i--){
		printf("%d", num>>i&1);
	}
	printf("\n");

	for(int i = 0, j=31, m,n; i<pos && i<j; i++, j--){
		m = num>>i&1;
		n = num>>j&1;
		if(m!=n){
			num = num^(1<<i);
			num = num^(1<<j);
		}
	}

	printf("after reversing %d bit only: ",pos);
	for(int i=31; i>=0; i--){
		printf("%d", num>>i&1);
	}
	printf("\n");
}




/*******************************************************************************
  2. WAP for swapping first and last nibbles in given short integer [2 byte ].
Example:
Input
num = 63

Output
It’s binary : 0000 0000 0011 1111
After swap : 1111 0000 0011 0000
 *******************************************************************************/
#include<stdio.h>
int main(){
	int num, n,m;
	printf("Enter Number: ");
	scanf("%d", &num);
	printf("Binary = ");
	for(int i=15; i>=0; i--){
		printf("%d",num>>i&1);
		if(i%4==0)
                        printf(" ");
	}
	printf("\n");
	
	//using loop
	/*for(int i=0, j=12; i<4; i++, j++){
		m = num>>i&1;
		n = num>>j&1;
		if(m!=n){
			num = num^1<<i;
			num = num^1<<j;
		}
	}*/

	//using masking Technique
	int t1 = num & 0xf;
       	t1 = t1<<12;
	int t2 = num & 0xf000;
	t2 = t2>>12;
	num = num | t1 | t2;	

	printf("After swap: ");                                                                                                 for(int i=15; i>=0; i--){
		printf("%d",num>>i&1);
		if(i%4==0)
                printf(" ");
	}
	printf("\n");
}


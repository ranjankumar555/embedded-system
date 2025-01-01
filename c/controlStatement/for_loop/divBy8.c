/************************************************************************************************
4. WAP to find num is divisble by 8 or not using bitwise operator and ternary operator
Ex1. i/p 40 o/p : yes
Ex2. i/p 62 o/p : no
*************************************************************************************************/

#include<stdio.h>
int main(){
	int num;
	printf("Enter the number: ");
	scanf("%d", &num);
	((num & 7) == 0) ? printf("%d is divisible by 8", num) : printf("%d is not divisible by 8",num);
	printf("\n");
	return 0;
}

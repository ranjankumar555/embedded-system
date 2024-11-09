#include<stdio.h>
int main(){
	int num;
	printf("Enter two digit number: ");
	scanf("%d", &num);
	int x = num%10;
	num/=10;
	int y = num%10;
	
	int rev = 0;
	rev = rev*10 + x;
	rev = rev*10 + y;

	printf("After reversing: %d\n",rev);
	return 0;
}

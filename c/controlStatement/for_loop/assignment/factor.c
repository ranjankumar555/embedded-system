/***********************************************************************
 *WAP in C to print factor of number using goto.
 * ********************************************************************/
#include<stdio.h>
int main(){
	int num, i = 1;
	printf("Enter the number: ");
	scanf("%d", &num);
L1:
	if(num%i==0){
		printf("%d ",i);
	}
	i++;
	if(i<=num)goto L1;
	printf("\n");
	return 0;
}

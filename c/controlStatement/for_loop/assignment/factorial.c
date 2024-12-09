/*************************************************************
 * WAP in C to print factorial of num using while loop
 * ***********************************************************/

#include<stdio.h>
int main(){
	printf("Enter n: ");
	int n,fact=1;
	scanf("%d",&n);
	int temp =n;
	while(n>0){
		fact = fact*n;
		n--;
	}
	printf("Factorial of %d is %d\n", temp,fact);
	return 0;
}

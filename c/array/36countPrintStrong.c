#include<stdio.h>
#include "arrayLib.h"
int isStrong(int);
int factorial(int);
int main(){
	int a[7] = {2,4,2,6,145,28,1};
	int n = 7,count = 0;
	printf("Before: ");
	printArray(a,n);
	for(int i =0; i<n; i++){
		if(isStrong(a[i])){
			count++;
			printf("%d ",a[i]);
		}
	}
	printf("\ncount  = %d\n",count);
	return 0;
}
int isStrong(int num){
	int sum = 0, temp =num;
	while(temp){
		sum += factorial(temp%10);
		temp /= 10;
	}
	if(sum == num){
		return 1;
	}
	return 0;
}

int factorial(int n){
	int fact = 1;
	while(n){
		fact = fact*n--;
	}
	return fact;
}


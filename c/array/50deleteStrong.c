#include<stdio.h>
#include "arrayLib.h"
int isStrong(int);
int factorial(int);
int main(){
	int a[6]={2,145,2,14,3,2};
	int n = 6;
	printf("Before: ");
	printArray(a,n);
	for(int i =0; i<n; i++){
		if(isStrong(a[i])){
			delete(a, i, &n);
			i--;
		}
	
	}
	printf("After: ");
	printArray(a,n);
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


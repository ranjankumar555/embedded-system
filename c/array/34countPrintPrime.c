#include<stdio.h>
#include "arrayLib.h"
int isPrime(int);
int main(){
	int a[7] = {3,4,5,6,7,8,9};
	int n = 7,count = 0;
	printf("Before: ");
	printArray(a,n);
	for(int i =0; i<n; i++){
		if(isPrime(a[i])){
			count++;
			printf("%d ",a[i]);
		}
	}
	printf("\ncount  = %d\n",count);
	return 0;
}
int isPrime(int num){
	if(num<2) return 0;
	for(int i = 2; i<num; i++){
		if(num%i == 0){
			return 0;
		}
	}
	return 1;
}

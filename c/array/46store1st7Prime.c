#include<stdio.h>
#include "arrayLib.h"
int isPrime(int);
int main(){
	int n = 7,count = 0, a[7], j=0;
	for(int i =2; count<=n; i++){
		if(isPrime(i)){
			a[j++] = i;
			count++;
		}
	}
	printf("After: ");
	printArray(a,n);
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

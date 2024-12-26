#include<stdio.h>
#include "arrayLib.h"
int isPerfect(int);
int main(){
	int a[7] = {3,4,5,6,7,28,9};
	int n = 7,count = 0;
	printf("Before: ");
	printArray(a,n);
	for(int i =0; i<n; i++){
		if(isPerfect(a[i])){
			count++;
			printf("%d ",a[i]);
		}
	}
	printf("\ncount  = %d\n",count);
	return 0;
}
int isPerfect(int num){
	int sum =0;
	for(int i = 1; i<num; i++){
		if(num%i == 0){
			sum = sum+i;
		}
	}
	if(sum == num)
		return 1;
	else
		return 0;
}

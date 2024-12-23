#include<stdio.h>
#include "arrayLib.h"
#include<math.h>
int isArmstrong(int);
int count(int);
int main(){
	int a[7] = {22,4,21,6,153,28,11};
	int n = 7,count = 0;
	printf("Before: ");
	printArray(a,n);
	for(int i =0; i<n; i++){
		if(isArmstrong(a[i])){
			count++;
			printf("%d ",a[i]);
		}
	}
	printf("\ncount  = %d\n",count);
	return 0;
}
int isArmstrong(int num){
	int sum = 0, temp =num;
	int digit = count(num);
	while(temp){
		sum = sum + pow(temp%10, digit); 
		temp /= 10;
	}
	if(sum == num){
		return 1;
	}
	return 0;
}

int count(int n){
	int c = 0;
	while(n){
		c++;
		n /= 10;
	}
	return c;
}


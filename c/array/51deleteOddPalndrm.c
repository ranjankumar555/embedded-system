#include<stdio.h>
#include "arrayLib.h"

int isOddPalindrome(int);
int main(){
	int a[6]={22,141,222,45,33,77};
	int n = 6;
	printf("Before: ");
	printArray(a,n);
	for(int i=0; i<n; i++){
		if(isOddPalindrome(a[i])){
			delete(a, i, &n);
			i--;
		}
	}
	printf("After: ");
	printArray(a,n);
	return 0;
}

int isOddPalindrome(int n){
	int temp = n, rev =0;
	while(temp){
		rev = rev*10 + temp%10;
		temp /=10;
	}
	if(rev == n && n%2 != 0){
		return 1;
	}
	else{
		return 0;
	}
}

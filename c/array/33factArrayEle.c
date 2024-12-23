#include<stdio.h>
#include "arrayLib.h"

int fact(int);

int main(){
	int a[4]={ 4, 5, 6, 4};
	int n = 4;
	int b[4];
	printf("Before: ");
	printArray(a,n);
	for(int i=0; i<n; i++){
		b[i] = fact(a[i]);
		printf("%d ",b[i]);
	}
	printf("\n");
	return 0;
}

int fact(int n){
	int f = 1;
	while(n){
		f = f*n--;
	}
	return f;
}

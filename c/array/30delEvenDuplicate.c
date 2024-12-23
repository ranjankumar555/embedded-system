#include<stdio.h>
#include "arrayLib.h"

int main(){
	int a[10]={3,3,2,4,4,2,5,3,4,9};
	int n = 10;
	printf("Before: ");
	printArray(a,n);
	for(int i=0, j; i<n; i++){
		if(a[i] % 2 == 0){
			for(j=i+1; j<n; j++){
				if(a[i] == a[j]){
					delete(a, j, &n);
					j--;
				}
			}
		}
	}
	printf("After: ");
	printArray(a,n);	
	return 0;
}

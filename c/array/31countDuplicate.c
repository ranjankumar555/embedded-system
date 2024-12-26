#include<stdio.h>
#include "arrayLib.h"
int main(void){
	int a[10]={3,3,2,4,4,2,5,3,4,9};
	int n = 10, count = 1, flag = 0;
	printf("Before: ");
	printArray(a,n);
	for(int i=0,j; i<n; i++){
		for(j=i+1; j<n; j++){
			if(a[i] == a[j]){
				count++;
				delete(a, j, &n);
				j--;
				flag =1;
			}
		}
		if(flag){
			printf("%d = %d\n", a[i], count);
			flag = 0;
		}
		count = 1;
	}
	return 0;
}

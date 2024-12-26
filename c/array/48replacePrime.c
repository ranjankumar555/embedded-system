#include<stdio.h>
#include "arrayLib.h"
int isPrime(int);
int main(){
        int a[8]={11,22,33,44,55,66,77,88};
        int n = 8;
        printf("Before: ");
        printArray(a,n);
        for(int i =0; i<n; i++){
                if(isPrime(i)){
			a[i] = 0;
                }
		printf("%d ",a[i]);
        }
	printf("\n");
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

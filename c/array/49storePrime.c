#include<stdio.h>
#include "arrayLib.h"
int isPrime(int);
int main(){
        int a[8]={11,22,33,44,55,66,77,88};
        int b[8] = {0}, n = 8, j=0, c=0;
        printf("Before: ");
        printArray(a,n);
        for(int i =0; i<n; i++){
                if(isPrime(i)){
			b[j++] = a[i];
			c++;
                }
        
	}
	printf("After: ");
	printArray(b,c);
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

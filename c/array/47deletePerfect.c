#include<stdio.h>
#include "arrayLib.h"
int isPerfect(int);
int main(){
	int a[7]={6,6,7,28,6,5,24};
        int n = 7;
        printf("Before: ");
        printArray(a,n);
        for(int i =0; i<n; i++){
                if(isPerfect(a[i])){
			delete(a,i,&n);
			i--;
                }

        }
	printf("After: ");
	printArray(a,n);
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

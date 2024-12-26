#include<stdio.h>
#include "arrayLib.h"
int isPerfect(int);
int main(){
        int a[5] = {2,4,6,28,6};
        int n = 5;
        printf("Before: ");
        printArray(a,n);
        for(int i =0; i<n; i++){
                if(isPerfect(a[i])){
                        printf("num = %d, pos = %d\n",a[i],i);
			break;
                }
        }
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

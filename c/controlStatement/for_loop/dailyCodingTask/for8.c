/*
 * 8. WAP in C to print given series .
 *    -13 -8 -4 -1 1 2.
*/

#include<stdio.h>
void main(){
        int temp=-13;
        for(int i=5; i>=0; i--){
                printf("%d ",temp);
                temp = temp +i;
        }
        printf("\n");
}

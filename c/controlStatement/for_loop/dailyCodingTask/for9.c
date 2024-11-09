/* 9. WAP in C to print given series .
 *    2 9 28 65 126 217 *
 */

#include<stdio.h>
void main(){
	for(int i=1; i<=6; i++){
		printf("%d ", i*i*i + 1);
	}
	printf("\n");
}

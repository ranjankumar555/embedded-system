/*7. WAP in C to print given series .
1 2 4 7 11 16 22
*/

#include<stdio.h>
void main(){
	int temp=1;
	for(int i=1; temp<=22; i++){
		printf("%d ",temp);
		temp = temp +i;
	}
	printf("\n");
}

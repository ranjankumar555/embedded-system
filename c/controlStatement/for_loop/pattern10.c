/* WAP to print below pattern 
 *
 * 		1
 *		3 1
 *		5 3 1
 *
 * *********************************************/

#include<stdio.h>
int main(){
	int k;
	for(int i=1;i<=3; i++){
		k=2*i+1;
		for(int j=0; j<i; j++){
			printf("%d ",k-=2);
		}
		printf("\n");
			
	}



	return 0;
}

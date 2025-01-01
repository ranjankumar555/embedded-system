/* WAP to print below pattern 
 *
 * 		1
 *		2 1
 *		3 2 1
 *
 * *********************************************/

#include<stdio.h>
int main(){
	for(int i=0,k=3;i<3; i++){
		k=i+1;
		for(int j=0; j<=i; j++){
			printf("%d ",k--);
		}
		printf("\n");
			
	}



	return 0;
}

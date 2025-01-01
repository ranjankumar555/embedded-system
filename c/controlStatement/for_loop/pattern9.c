/* WAP to print below pattern 
 *
 * 		6 4 2
 *		4 2
 *		2
 *
 * *********************************************/

#include<stdio.h>
int main(){
	int k;
	for(int i=3;i>=1; i--){
		k=2*i+2;
		for(int j=0; j<i; j++){
			printf("%d ",k-=2);
		}
		printf("\n");
			
	}



	return 0;
}

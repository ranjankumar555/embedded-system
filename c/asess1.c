// wap to print binary of double array of 5 element using array of pointer 
#include<stdio.h>

int main(){

	double arr[5] = {10.6, 9.6, 15.6, 23.5, 34.6};

	short int *p[5];
	
	int i,j,k;
	for(i=0; i<5; i++){
		p[i] = arr+i;
	}
	
	printf("Binary format of double data type: \n");
	for(i = 0; i<5; i++){
		printf("%lf --> ", arr[i]);
		for(j=3; j>=0; j--){
			for(k = 15; k>=0; k--){
				printf("%d", *(*(p+i)+j) >> k &1);
			}
		}
		printf("\n");
	}
	return 0;
}


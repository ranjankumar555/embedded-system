#include<stdio.h>
int main(){
	int arr[5] = {11,55,88,22,44}, *p;
	p=arr;
	int temp, n= sizeof(arr)/sizeof(arr[0]);
	for(int i=0; i<n-1; i++){
		for(int j=i; j<n; j++){
			if(*(p+i) < *(p+j)){
				temp = *(p+i);
				*(p+i) = *(p+j);
				*(p+j) = temp;
			}
		}
	}

	printf("After sorting: ");
	for(int i=0; i<n; i++){
		printf("%d ", *(p+i));
	}
	printf("\n");
}


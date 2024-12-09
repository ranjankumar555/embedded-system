#include<stdio.h>
#define RANGE 4
int main(){
	int a[7] = {5,3,1,2,1,9,6};
	int *p = a;
	int n = sizeof(a)/sizeof(a[0]);
	int temp;
	for(int i=0; i<RANGE; i++){
		for(int j = 0; j<RANGE-i-1; j++){
			if(a[j] < a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	printf("After sorting: ");
	for(int i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
}

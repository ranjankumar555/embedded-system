#include<stdio.h>
#define SIZE n+1
int main(){
	int n, index, num;
	printf("Enter number of element: \n");
	scanf("%d", &n);
	printf("Enter the number to be inserted: \n");
	scanf("%d", &num);
	printf("Enter index: \n");
	scanf("%d", &index);

	int a[SIZE];
	printf("Enter array element \n");
	for(int i =0; i<n-1; i++){
		scanf("%d", &a[i]);
	}

	for(int i = n-1; i>index; i--){
		a[i] = a[i-1];
	}
	a[index] = num;
	
	//print
	for(int i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}

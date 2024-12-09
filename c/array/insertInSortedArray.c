#include<stdio.h>
#define SIZE n+1
int main(){
	int n, index, num;
	printf("Enter number of element: \n");
	scanf("%d", &n);
	printf("Enter the number to be inserted: \n");
	scanf("%d", &num);

	int a[SIZE];
	printf("Enter array element \n");
	for(int i =0; i<n-1; i++){
		scanf("%d", &a[i]);
	}

	for(int i = n-2; ; i--){
		a[i+1] = a[i];
		if(a[i]<num){
			a[i+1] = num;
			break;
		}
		else
			a[i+1] = a[i];
	}
	
	//print
	for(int i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}

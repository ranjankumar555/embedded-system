#include<stdio.h>
#define SIZE n+m
int main(){
	int n, m;
	printf("Enter number of element for 1st array: \n");
	scanf("%d", &n);

	int a[n];
	printf("Enter 1st array element \n");
	for(int i =0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	printf("Enter number of element for 2nd array: \n");
	scanf("%d", &m);

	int b[m];
	printf("Enter array element \n");
	for(int i =0; i<m; i++){
		scanf("%d", &b[i]);
	}
	
	int c[SIZE];
	for(int i = 0,j=0, k =0; i<SIZE; i++){
		if(i%2==0){
			c[i] = a[k++];
		}
		else{
			c[i] = b[j++];
		}
	}
	
	//print
	for(int i=0; i<SIZE; i++){
		printf("%d ", c[i]);
	}
	printf("\n");
	return 0;
}

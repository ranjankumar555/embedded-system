#include<stdio.h>
void rotateLeft(int*, int, int);
int main(){
	int size;
	printf("Enter the length: ");
	scanf("%d",&size);

	int a[size];
	for(int i =0; i<size; i++){
		scanf("%d", a+i);
	}

	int n;
	printf("Left rotate the array by: ");
	scanf("%d", &n);

	rotateLeft(a, size, n);

	for(int i =0; i<size; i++){
		printf("%d ", *(a+i));
	}
	printf("\n");

	return 0;
}

void rotateLeft(int* a, int len, int n){
	n = n%len;
	int temp[n], j=0;
	
	for(int i=0; i<n; i++){
		*(temp+i) = *(a+i);
	}

	for(int i = 0; i<len; i++){
		if(i<len-n)
			*(a+i) = *(a+i+n);
		else
			*(a+i) = *(temp + j++);
	}
}


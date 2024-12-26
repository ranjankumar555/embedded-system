#include<stdio.h>
void rotateRight(int*, int, int);

int main(){
	int size,i;
	printf("Enter length: ");
	scanf("%d", &size);

	int a[size];
	for(int i = 0; i<size; i++){
		scanf("%d", a+i);
	}

	int n = 1;
	//printf("Right rotate the array by: ");
	//scanf("%d",&n);

	rotateRight(a, size, n);
	
	//print
	for(int i=0; i<size; i++){
		printf("%d ", *(a+i));
	}
	printf("\n");

	return 0;
}

void rotateRight(int *a, int len, int n){
	
	n = n%len; 
	char temp[n];
	int j=0;
	for(int i = len - n; i<len; i++){
		*(temp + j++) = *(a+i); // copy last n element to temp
	}
	
	for(int i= len-1; i>=0; i--){
		if(i>=n)
			*(a+i) = *(a+i-n);
		else{
			*(a+i) = *(temp+i);
		}
	}
}


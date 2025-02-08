#include<stdio.h>
#include<stdlib.h>
int main(){
	int n, *p;
	printf("Enter N: ");
	scanf("%d",&n);
	p = (int*)malloc(sizeof(int)*n);

	for(int i =0; i<n; i++){
		scanf("%d", p+i);
	}

	printf("Element are: \n");
	for(int i = 0; i<n; i++){
		printf("%d\n", *(p+i));
	
	}

	free(p);
	p = NULL;

	return 0;
}


#include<stdio.h>
void main(){
	int n;
	printf("Enter rows: ");
	scanf("%d", &n);
	int k;
	for(int i=1; i<=n; i++){
		k=1;
		for(int j=0; j<i; j++){
			
			printf("%d ",k=k+j);

		}
		printf("\n");
	}
}

#include<stdio.h>
void main(){
	int n;
	printf("Enter rows: ");
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		for(int j= 2*i-1; j>=1; j--){

			printf("%d",j);
		}
		printf("\n");
	}
}

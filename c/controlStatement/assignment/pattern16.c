#include<stdio.h>
int main(){
	int n,i,j;
	printf("Enter rows: ");
	scanf("%d", &n);
	
	int var = 0;
	for(i =1; i<=n; i++){
		var = 1;
		for(j = 1; j<=n-i+1; j++){
			printf("%d ", var);
			var = var + j;
		}
		printf("\n");
	}
	return 0;
}

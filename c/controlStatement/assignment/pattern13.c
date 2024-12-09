#include<stdio.h>
void main(){
	int n;
	printf("Enter rows: ");
	scanf("%d", &n);
	int var,k;
	for(int i=1; i<=n; i++){
		var =4;
		k=i;
		for(int j=1; j<=i; j++){
		//k=i;	
			printf("%d  ",k);
			k =  k+var;
			var--;
		}
		printf("\n");
	}
}

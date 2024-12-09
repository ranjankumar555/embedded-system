#include<stdio.h>
int main(){
	int n;
	printf("Enter rows: ");
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		for(int j=0; j<i; j++){
			printf(" ");
		}
		for(int k =n; k>i; k--){
			if(i%2==0){
				printf("* ");
			}
			else{
				printf("%d ", k-i);
			}
		}
		printf("\n");
	}
	return 0;
}

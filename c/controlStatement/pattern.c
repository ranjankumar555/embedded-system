#include<stdio.h>
int main(){
	int n=5;
	for(int i=0; i<n; i++){
		for(int j =0; j<n-i-1; j++){
			printf(" ");
		}

		for(int k=0; k<=i; k++){
			printf("* ");
		}
		printf("\n");
	}
	
	for(int i=0; i<n-1; i++){
		for(int j =0; j<=i; j++){
			printf(" ");
		}

		for(int k=0; k<n-i-1; k++){
			printf("* ");
		}
		printf("\n");
	}
}
	

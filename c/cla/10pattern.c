#include<stdio.h>
#include<stdlib.h>
int main(int argc, char** argv){
	if(argc != 2){
		printf("USAGE: ./a.out int\n");
		return 1;
	}
	int n = atoi(*(argv+1));

	int i,j,k,t;
	for(i =1; i<=n; i++){
		t=n-i+1;
		for(j = 1; j<=i-1; j++){
			printf(" ");
		}
		for(k = 1; k<=n-i+1; k++){
			printf("%d ", 2*t-1);
			t--;
		}
		printf("\n");
	}
	return 0;
}

#include<stdio.h>
int main(){
	int n = 5;
	for(int i = 0; i<n; i++){
		for(int j =0; j<n; j++){
			if(i==0 && j==4 || i==1 && j==3 || i==2 && j==2 || i==3 && j==1 ||i==4 && j==0)
				printf("* ");
			else
			printf("%d ", j+1);
				
		}			
		printf("\n");
	}
	return 0;
}

#include<stdio.h>
void main(){
        int n;
        printf("Enter rows: ");
        scanf("%d", &n);
        for(int i=0; i<n; i++){

		//for space
		for(int k=0; k<i; k++){
			printf(" ");
		}

		//for data
                for(int j=i+1; j<=n; j++){

                        printf("%d",2*j-1);
                }
                printf("\n");
        }
}

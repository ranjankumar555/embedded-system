#include<stdio.h>
void main(){
        int n;
        printf("Enter rows: ");
        scanf("%d", &n);
        for(int i=0; i<n; i++){

                //for data
                for(int j=1; j<=n-i; j++){
			if(i%2==0)
                        	printf("* ");
			else
				printf("%d ",2*j - 1); 
                }
                printf("\n");
        }
}

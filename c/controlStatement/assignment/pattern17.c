#include<stdio.h>
int main(){
        int n,i,j;
        printf("Enter rows: ");
        scanf("%d", &n);

        int var = 0;
        for(i =1; i<=n; i++){
                var = 2;
                for(j = 1; j<=i; j++){
			if(j==4) j=4;
                        printf("%d ", var-1);
			var += j;
                }      
	       printf("\n");	
        }       
        return 0;
} 

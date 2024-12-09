#include<stdio.h>
int main(){
        int n,k;
        printf("Enter num: ");
        scanf("%d", &n);
        for(int i=0; i<n; i++){
               k=5; 
                for(int j =0; j<=i; j++){
                        if(i%2==0)
				printf("%d ",k--);
			else
				printf("* ");
		}
	 printf("\n");	
        }       
        return 0;
} 

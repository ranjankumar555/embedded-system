#include<stdio.h>
void main(){
        int n;
	char ch;
        printf("Enter rows: ");
        scanf("%d", &n);
        for(int i=0; i<n; i++){
		
		ch = 'A';
                //for data
                for(int j=0; j<=i; j++){
			
			if(j%2==0){
                        	printf("%c ",ch + i);
			}
			else
				printf("* ");
                }
                printf("\n");
        }
}

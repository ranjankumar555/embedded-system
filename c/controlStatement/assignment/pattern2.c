#include<stdio.h>
void main(){
        int n;
        printf("Enter rows: ");
        scanf("%d", &n);
        for(int i=0; i<n; i++){
                for(int j=1; j<=i+1; j++){

                        printf("%d ",2*j);
                }
                printf("\n");
        }
}

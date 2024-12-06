#include<stdio.h>
int main(){
        int sr,c;
        printf("Enter start range and count: ");
        scanf("%d %d",&sr,&c);
        int i;
        printf("Prime Number = ");
        for(int num=sr; c>0; num++){

                for(i=2; i<=num; i++){
                        if(num%i == 0){
                                break;
                        }
                }
                if(num==i){
                        c--;
                        printf("%d ", num);
                }
        }
        printf("\n");
} 

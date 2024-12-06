#include<stdio.h>
int main(){
        int sr,c;
        printf("Enter start range and count: ");
        scanf("%d %d",&sr,&c);
        for(int i=sr; c>0; i++){
                int rev = 0, temp = i;

                while(temp)
                {
                        rev = rev*10 + temp%10;
                        temp =temp/10;
                }
                if(rev == i){
                        printf("%d ",i);
			c--;
                }
        }
        printf("\n");
        return 0;
}

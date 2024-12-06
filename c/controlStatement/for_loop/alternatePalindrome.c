#include<stdio.h>
int main(){
        int sr,c=0,er;
        printf("Enter start and end range: ");
        scanf("%d %d",&sr,&er);
        for(int i=sr; i<=er; i++){
                int rev = 0, temp = i;

                while(temp)
                {
                        rev = rev*10 + temp%10;
                        temp =temp/10;
                }
                if(rev == i){
			if(c%2 == 0)
                        	printf("%d ",i);
                        c++;
                }
        }
        printf("\n");
        return 0;
}

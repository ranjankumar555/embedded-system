#include<stdio.h>
int main(){
        int sr,er;
        printf("Enter start range and count: ");
        scanf("%d %d",&sr,&er);
	for(int i=sr; i<er; i++){
		int rev = 0, temp = i;
		
		while(temp)
		{
			rev = rev*10 + temp%10;
			temp =temp/10;
		}
		if(rev == i){
			printf("%d ",i);
		}
	}
	printf("\n");
	return 0;
}

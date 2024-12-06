#include<stdio.h>
int main(){
	int sr, er;
	printf("Enter the starting and ending range: ");
	scanf("%d %d",&sr,&er);
	int i,c=0;
	printf("Prime Number = ");
	for(int num=sr; num<=er; num++){

		for(i=2; i<=num; i++){
			if(num%i == 0){
				break;
			}
		}
		if(num==i){
			c++;
			printf("%d ", num);
		}
	}
	printf("\nCount=%d\n", c);
}

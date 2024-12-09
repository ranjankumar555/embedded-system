#include<stdio.h>
int main(){
	int n,i,j,k;
	char ch;
	printf("enter n: ");
	scanf("%d",&n);
	int r = n%27;
       for(i=0; i<r; i++){
      		ch= (64 + r);
		for(j =0; j<i; j++){
			printf("* ");
			ch--;
		}
		for(k =j; k<r; k++){
			printf("%c ", ch--);
		}
		printf("\n");
       }
       return 0;
}


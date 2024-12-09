#include<stdio.h>
int main(){
	int n;
	char ch;
	int k;
	printf("Enter num: ");
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		ch = 'A';
		k = 1;
		for(int j =0; j<n-i; j++){
			if(j%2==0){
				printf("%c ", ch++);
			}
			else{
				printf("%d ",k++);
			}
		}
		printf("\n");
	}
	return 0;
}

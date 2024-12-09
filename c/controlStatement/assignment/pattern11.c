#include<stdio.h>
int main(){
	int n;
	printf("Enter the number of rows: ");
	scanf("%d", &n);

	int var = n;
	for(int i = 1; i<=n; i++){
	       for(int j =1;j<=n; j++){
		       if(j==var){
			       printf("* ");
		       }
		       else{
			       printf("%d ", j);
		       }
	       }
	       var--;
	       printf("\n");
	}
	return 0;
}

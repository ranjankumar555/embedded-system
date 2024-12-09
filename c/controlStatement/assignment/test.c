#include<stdio.h>
int main(){
        int n;
        int k=5;
	int x = 0;
        char ch = 'a';
        printf("Enter num: ");
        scanf("%d", &n);
        for(int i=0; i<n; i++){
		ch = ch + x;
                for(int j =0; j<=i; j++){
			printf("%c ", ch);
			x++	
                }
		
          printf("\n");
        }
        return 0;
}

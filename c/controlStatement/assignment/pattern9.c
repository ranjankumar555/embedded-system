#include <stdio.h>

int main() {
    int n = 5,k;
	char ch='E';
    for (int i = 1; i <= n; i++) {
        for (int k = 1; k <= n - i; k++) {
            printf(" ");
        }

        for (int j = 1; j <= i; j++) {
            if(i%2==0){
		    printf("%d", k+j);
	    }
	    else{
		    printf("%c", ch++);
	    }
        }
	    ch = 'E'-i;
	    k = 0;

        printf("\n");
    }

    return 0;
}

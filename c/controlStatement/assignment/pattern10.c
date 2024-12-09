#include <stdio.h>

int main() {
    int n = 5;
        char ch='E';
    for (int i = 1; i <= n; i++) {
        for (int k = 1; k <= n - i; k++) {
            printf(" ");
        }

        for (int j = 1; j <= i; j++) {
            if(i%2==0){
                    printf("%c", ch++);
            }
            else{
                    printf("#");
            }
        }
            ch = 'A';
  

        printf("\n");
    }

    return 0;
}

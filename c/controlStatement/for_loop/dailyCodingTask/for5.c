//5. WAP in C to print even number (using bitwise operator ) b/w 299 to 275.
#include <stdio.h>

void main() {
    int r1, r2;
    printf("Enter the range1: ");
    scanf("%d", &r1);
    printf("Enter the range2: ");
    scanf("%d", &r2);
    printf("Even numbers between %d and %d:\n", r1, r2);

    // Loop from r1 to r2
    if (r1 < r2) {
        for (int i = r1; i <= r2; i++) {
            if ((i & 1) == 0) { // Check if the number is even
                printf("%d\n", i);
            }
        }
    } else {
        for (int i = r1; i >= r2; i--) {
            if ((i & 1) == 0) { // Check if the number is even
                printf("%d\n", i);
            }
        }
    }
    printf("\n");
}


#include <stdio.h>

int main() {
    int num;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Use switch case to check the number
    switch (num > 0) {
        case 1:  // This means the number is positive (num > 0)
            printf("The number is positive.\n");
            break;
        case 0:
            // If the number is not greater than 0, check if it's negative or zero
            switch (num < 0) {
                case 1:  // This means the number is negative (num < 0)
                    printf("The number is negative.\n");
                    break;
                case 0:  // This means the number is zero (num == 0)
                    printf("The number is zero.\n");
                    break;
            }
            break;
    }

    return 0;
}


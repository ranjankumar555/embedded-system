#include <stdio.h>

int main() {
    unsigned short num; // Using unsigned short to ensure proper bit manipulation
    int rotation;
    
    // Get input from the user
    printf("Enter a number (0-65535): ");
    scanf("%hu", &num); // %hu is the format specifier for unsigned short
    printf("Enter number of rotations: ");
    scanf("%d", &rotation);
    

    // Print the original number in binary
    printf("Original number in binary: ");
    for (int i = 15; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
    
    // Normalize the rotation to ensure it's within the 16-bit range
    rotation = rotation % 16;
    
    int mask = (1<<rotation) - 1;

    // Rotate bits to the left
    unsigned short result = (num >> rotation) | ((num & mask) << (16 - rotation));

    // Print the result in binary after rotation
    printf("After rotation of %d bits: ", rotation);
    for (int i = 15; i >= 0; i--) {
        printf("%d", (result >> i) & 1);
    }
    printf("\n");

    return 0;
}
	

//6. WAP in C to print alternate odd number between 21 to 39.
#include <stdio.h>
void main() {
	int r1, r2;
   	 printf("Enter the odd range1: ");
   	 scanf("%d", &r1);
   	 printf("Enter the odd range2: ");
   	 scanf("%d", &r2);
   	 printf("Odd numbers between %d and %d:\n", r1, r2);
	
	 for(int i= r1; i<=r2; i += 4){ //alternate odd integer
	 	printf("%d ",i);
	 }
	printf("\n");
}

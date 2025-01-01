#include<stdio.h>
void main(){
        int num;
        printf("Enter Number: ");
        scanf("%d", &num);
        printf("Enter position 1 to clear bits: ");
        int pos1;
        scanf("%d", &pos1);

        printf("Enter position 2 to clear bits: ");
        int pos2;
        scanf("%d", &pos2);

        num = num&~(1<<pos1);
        num = num&~(1<<pos2);

	printf("\nResult...\n"); 
        printf("%dth and %dth bit is clear successfully: %d\n", pos1, pos2, num);


}

#include<stdio.h>
void main(){
	int num;
	printf("Enter Number: ");
	scanf("%d", &num);
	printf("Enter position 1: ");
	int pos1;
        scanf("%d", &pos1);

	printf("Enter position 2: ");
        int pos2;
        scanf("%d", &pos2);

	num = num|1<<pos1;
	num = num|1<<pos2;

	printf("%dth and %dth bit is set successfully: %d\n", pos1, pos2, num);


}

#include<stdio.h>
void main(){
        int num, product = 1, count =2 ;
        printf("Enter Number: ");
        scanf("%d", &num);
        int temp = num;
L7:
        product *=(num%10);
       	printf("product = %d\n", product); 
        num/=10;
	
	--count;
        if(count>0){
		//--count;
                goto L7;
		
        }

        printf("The product of last two digit in %d is: %d\n", temp, product);

}

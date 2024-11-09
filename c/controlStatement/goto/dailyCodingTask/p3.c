#include<stdio.h>
void main(){
        int num, sum = 0, count =3 ;
        printf("Enter Number: ");
        scanf("%d", &num);
        int temp = num;
L7:
        sum +=(num%10);
        printf("sum = %d\n", sum);
        num/=10;

        --count;
        if(count>0){
                //--count;
                goto L7;

        }

        printf("The sum of last three digit in %d is: %d\n", temp, sum);

}

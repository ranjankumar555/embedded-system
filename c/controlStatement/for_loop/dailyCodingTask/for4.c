//4. WAP in C to print all odd factor of 900.
#include<stdio.h>
void main(){

        int num,factor = 0;
        printf("Enter the number: ");
        scanf("%d", &num);

        for(int i=1; i<=(num/2); i++){
		int x = num%i;
                if(x == 0&& i%2!=0)
                        printf("Odd factor = %d\n",i);

        }

        printf("Odd factor = %d\n",num);


}

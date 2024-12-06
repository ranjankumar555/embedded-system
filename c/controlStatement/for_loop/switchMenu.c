#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main(){
	int num;
	int option;
	while(1){
		printf("1. Check prime number\n2. Check perfect number\n3. Check strong number\n4. Check armstrong number\n5. Press 5 to exit\n");
		printf("Select an option: ");
		scanf("%d",&option);
		//printf("\nEnter a number: ");
		//scanf("%d", &num);

		//switch statement
		switch(option){
			case 1:
				printf("\nEnter a number: ");
				scanf("%d", &num);
				int i;
				for(i=2; i<=num; i++){
					if(num%i == 0){
						break;
					}
				}
				if(num==i){
					printf("%d is prime Number\n", num);
				}
				else{
					printf("%d is not prime number\n", num);
				}
				printf("\n");
				break;

			case 2: 
				printf("\nEnter a number: ");
				scanf("%d", &num);
				int sum2 = 0;
				for(int j=1; j<num; j++){
					if(num%j == 0){
						sum2 = sum2 + j;
					}
				}
				if(sum2==num){
					printf("%d is perfect number\n",num);
				}
				else{
					printf("%d is not perfect number\n",num);
				}
				printf("\n");
				break;

			case 3:
				printf("\nEnter a number: ");
				scanf("%d", &num);
				int sum3 = 0;
				int fact =1;
				int digit,k, temp = num;
				printf("temp = %d\n",temp);
				while(temp){
					digit = temp%10;
					fact=1;
					for(k=1; k<=digit; k++){
						fact = fact*k;
					}
					sum3 = sum3 + fact;
					temp /=10;
				}
				if(sum3==num){
					printf("%d is strong number\n",num);
				}
				else{
					printf("%d is not strong number\n",num);
				}
				printf("\n");
				break;

			case 4:
				printf("\nEnter a number: ");
				scanf("%d", &num);
				int temp2 = num, sum4 = 0, digit4;
				int temp1 = num, c=0;
				while(temp1>0){
					c++;
					temp1 /=10;
				}
				while(temp2){
					digit4 = temp2%10;
					sum4 = sum4 + (int)pow(digit4,c);
					temp2 /= 10;
				}
				if(sum4 ==num){
					printf("%d is armstrong number\n",num);
				}
				else{
					printf("%d is not armstrong number\n", num);
				}
				printf("\n");
				break;
			case 5:

				exit(0);
				break;


			default:
				printf("invalid option \n\a");
		}
	}
}

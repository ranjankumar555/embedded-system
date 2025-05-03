#include<stdio.h>
int main(){
	int num, temp;
	int flag = 1;
	printf("Enter number: ");
	scanf("%d", &num);
	printf("hexadecimal by compiler = %x\n", num);
	printf("hexadecimal by user = 0X");

	for(int i = 28; i>=0; i -= 4){
		temp = (num>>i)&0xf;
		if(temp==0 && flag) 
			continue;
		if(temp>9){
			printf("%c",'A' + temp-10);
			flag =0;
		}
		else{
			printf("%c", 48+temp);
			flag = 0;
		}
	}

	printf("\n");
}


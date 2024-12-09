#include<stdio.h>
int main(){
	int a[5] = {123,23,89,3425,721};
	int sum = 0;
	int fd =0;
	int *p =a, temp;
	for(int i =0; i<5; i++){
		temp = *(p+i);
		while(temp){
			fd = temp%10;
			temp = temp/10;
		}
		sum = sum + fd;
	}
	printf("sum = %d\n", sum);
	return 0;
}

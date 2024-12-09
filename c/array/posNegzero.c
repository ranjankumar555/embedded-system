#include<stdio.h>
int main(){
	int a[10] = {-11,11,12,-12,9,8,-3,10,22};
	int pos = 0, neg = 0, odd= 0, even=0;
	for(int i =0; i<10; i++){
		if(a[i]>0){
			pos++;
			if(a[i] & 1)
				odd++;
			else
				even++;
		}
		else{
			neg++;
		}
	}
	printf("positive = %d\t negative = %d\t odd = %d\t even = %d\n", pos, neg, odd, even);
	return 0;
}

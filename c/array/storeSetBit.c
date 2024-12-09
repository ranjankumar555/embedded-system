#include<stdio.h>

int main(){
	int a[5] = {10,15,64,100,511};
	int setBit[5];
	int clear = 0,set =0;
	for(int i=0; i<5; i++){
		for(int j = 0; j<32; j++){
			if(a[i]>>j&1){
				set++;
			}
		}
		setBit[i] = set;
		set = 0;
	}
	for(int i =0; i<5; i++){
		printf("%d ", *(setBit + i));
	}
	printf("\n");
	return 0;
}

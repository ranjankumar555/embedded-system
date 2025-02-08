#include<stdio.h>
#include<stdlib.h>
int count(int);
int mypow(int);

int main(int argc, char** argv){
	if(argc != 2){
		printf("USAGE: %s <integer> \n",argv[0]);
		return 1;
	}

	int num,c = 0,div;
	num = atoi(argv[1]);
	c = count(num);
	div = mypow(c-1);

	int res = num/div;
	printf("output = %d\n",res);

	return 0;

}
int count(int n){
	int i=0;
	while(n){
		i++;
		n = n/10;
	}
	return i;
}

int mypow(int n){
	int t=1;
	
	while(n--){
		t = t*10;
	}
	return t;
}




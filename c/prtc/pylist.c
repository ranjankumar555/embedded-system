#include<stdio.h>
typedef union u{
	char ch;
	int i;
	float f;
}list;
int main(){
	list l;
	l.f = 23.5;
	for(int i = 31; i>=0; i--){
		printf("%d", l.i>>i&1);
	}
	printf("\n");

	return 0;
}

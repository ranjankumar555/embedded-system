#include<stdio.h>
int main(){
	char s[20] ,*p = s;
	printf("Enter the string: ");
	scanf("%[^\n]s", p);

	int count =0;
	while(*p){
		for(int i=0; i<32; i++){
			if(*p>>i&1){
				count++;
			}
		}
		printf("%d ",count);
		count =0;
		p++;
	}
	printf("\n");
	return 0;
}


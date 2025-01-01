#include<stdio.h>
void mystrcpy(char*, const char*);
int main(){
	char s[20];
	printf("enter string: ");
	scanf("%s", s);

	int i, j, count=1, flag = 1;
	for(i=0; *(s+i); i++){
		count=1;
		for(j=i+1; *(s+j); j++){
			if(*(s+i) == *(s+j)){
				count++;
				mystrcpy(s+j, s+j+1);
				j--;
				flag=1;
			}
			
		}
		if(flag){
			printf("%c = %d\n", *(s+i), count);
			flag=0;
		}
	}
}
void mystrcpy(char* d, const char* src){
	int i;
	for(i=0; *(src +i); i++){
		*(d+i) = *(src+i);
	}
	*(d+i) = '\0';
}

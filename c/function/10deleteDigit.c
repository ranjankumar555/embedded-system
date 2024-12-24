#include<stdio.h>
int delCount(char* s);

int main(){
	char s[20];
	printf("enter string: ");
	scanf("%s", s);

	int c = delCount(s);

	printf("Digit count  = %d\n", c);

	return 0;
}
/*
int delCount(char* s){
	int count =0;
	int i,j;
	for(i=0; *(s+i); i++){
		if(*(s+i) <= '9' && *(s+i)>='0'){
			count++;
			for(j=i; *(s+j); j++){
				*(s+j) = *(s+j+1);
			}
			i--;
		}
	}
	printf("%s\n",s);
	return count;
}
*/
/** optimised **/
int delCount(char* s){
	int count=0,i,j=0;
	for(i=0; *(s+i); i++){
		if(*(s+i) >= '0' && *(s+i) <='9'){
			count++;
		}
		else{
			*(s+j++) = *(s+i);
		}
	}
	*(s+j) = '\0';
	printf("%s\n", s);
	return count;
}


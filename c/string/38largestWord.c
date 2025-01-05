#include<stdio.h>
void largestWord(char*);
void print(char*, int);
int main(){
	char s[20];
	printf("enter string: ");
	scanf("%s",s);
	
	largestWord(s);

	return 0;
}
void largestWord(char* p){
	char *q;
	int prevCount = 0, count =0;
	
	while(*p){
		if(*p != ' ' || *(p+1) != '\0'){
			count++;
		}
		else{
			if(count > prevCount){
				prevCount = count;
				q = p - prevCount;
				count = 0;
			}
		}
		p++;
	}
	print(q, prevCount);
}
void print(char* str, int range){
	while(range){
		printf("%c", *str);
		range--;
		str++;
	}
	printf("\n");
}

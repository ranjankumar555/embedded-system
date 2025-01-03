#include<stdio.h>
#include<limits.h>
void smallestWord(char* p);
int main(){
	char s[20];
	printf("Enter string: ");
	scanf("%[^\n]", s);
	
	smallestWord(s);

	return 0;
}
void smallestWord(char* p){
	int small = INT_MAX, count=0;
	char* q = p;
	while(*p){
		if(*p != ' '){
			count++;
		}
		else{
			if(count < small && count>0){
				small = count;
				q = p-count;
			}
				count =0;
		}
		p++;
	}
	if(count < small && count>0){
		small = count;
		q = p-count;
	}	
	while(small){
		printf("%c", *q);
		q++;
		small--;
	}
	printf("\n");
}

	

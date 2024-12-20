#include<stdio.h>

int count(char* s, char ch){
	int count = 0;
	for(int i=0; s[i]; i++){
		if(s[i] == ch){
			count++;
		}
	}
	return count;	
}
int main(){
	char str[20];
	printf("Enter string: ");
	scanf("%s", str);
	for(int i = 0; str[i]; i++){
		printf("%c = %d\n",str[i],count(str, str[i]));
	}

	return 0;
}













/*
void countChar(const char* s, int *a){
	for(int i=0; s[i]; i++){
		a[s[i]-97]++;
	}
	for(int i=0; s[i]; i++){
                printf("%c = %d\n", s[i], a[s[i] - 97]);
        }
}
int main(){
	char str[20];
	int freq[26] = {0};
	printf("enter string: ");
	scanf("%s", str);

	countChar(str,freq);

	return 0;
}
*/

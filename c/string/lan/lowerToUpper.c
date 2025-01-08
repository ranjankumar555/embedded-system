#include<stdio.h>
int main(){
	char s[26]={0};
	printf("Enter string: ");
	gets(s);

	for(int i=0; s[i]; i++){
		//if(s[i] >= 'a' && s[i] <= 'z'){
			s[i] = s[i] ^ 32;
		//}
	}
	puts(s);
	return 0;
}

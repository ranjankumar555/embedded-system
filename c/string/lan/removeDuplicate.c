#include<stdio.h>
#include<string.h>
int main(){
	char s[50];
	int i,j;
	printf("Enter string: ");
	scanf("%[^\n]s",s);
	
	for(i=0; s[i]; i++){
		for(j = i+1; s[j]; j++){
		       if(s[i] == s[j]){
		       strcpy(s+j, s+j+1);
		       j--;
		       }
		}
	}		
	printf("After removing duplicates= %s\n", s);

	return 0;
}

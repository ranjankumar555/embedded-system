#include<stdio.h>
#include<string.h>
void del_fun(char* s){
	int j;
	for(int i=0; s[i]; i++){
		for(j = i+1; s[j]; j++){
			if(s[i] == s[j]){
				strcpy(s+j, s+j+1);
				j--;
			}
		}
	}
}
int main(){
	char* str;
	printf("enter string: ");
	scanf("%s", str);
	del_fun(str);
	printf("%s\n",str);
	return 0;
}



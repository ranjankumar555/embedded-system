#include<stdio.h>
#include<string.h>

int main(){
	char s[20];
	int count =1;
	int i,j,flag=0;
	printf("Enter the string: ");
	scanf("%s",s);

	for(i =0; s[i]; i++){
		for(j = i+1; s[j]; j++){
			if(s[i] == s[j]){
				count++;
				strcpy(s+j, s+j+1);
				j--;
				flag = 1;
			}
		}
		if(flag){
		printf("%c ---- %d\n", s[i], count);
		count = 1;
		flag =0;
		}
	}
	return 0;
}


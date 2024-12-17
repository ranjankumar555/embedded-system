#include<stdio.h>
int main(){
	char p[50], res[50];
	int count= 0, j=0;
	printf("Enter string: ");
	scanf("%[^\n]s",p);
	
	int i=0;
	while(*(p+i)){
		if(*(p+i) !=' '){
			res[j++] = *(p+i);
			count = 1;
		}	
		else if(count && *(p+i+1) != '\0'){
			res[j++] = ' ';
			count = 0;
		}
		i++;
	}
	res[j] = '\0';
	printf("After removing space = %s\n", res);

	return 0;
}

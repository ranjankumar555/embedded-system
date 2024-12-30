#include<stdio.h>
int main(){
	char s[20];
	int j=0;
	char temp[20];
	temp[19] = '\0'; // to prevent segmentation faults

	printf("enter string: ");
	scanf("%[^\n]", s);

	char *p = s;
	while(*p){
		if(*p != ' '){
			*(temp+j++) = *p;
		}
		if(*p == ' ' || *(p+1) == '\0'){
			if(*(temp+j-1) == 'g'){
				*(temp+j) = '\0';
				printf("%s ", temp);
			}
			j=0;
		}
		p++;
	}
	printf("\n");
	return 0;
}


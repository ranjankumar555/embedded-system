//wap to reverse word having digit using pointer to an array of 3 char
#include<stdio.h>

void reverse(char (*p)[3]);
void revstr(char*, char*);
int my_strlen(char*);

int main(){
	char s[50];
	printf("Enter string: ");

	scanf("%[^\n]s", s);
	
	char (*p)[3] = s;
	reverse(p);
	printf("%s\n", s);
	
	return 0;
}
void reverse(char (*p)[3]){
	int i, j, flag=0;
	char* start, *end;

	start = end = p[0];
	
	int len = (my_strlen(p[0])/3);
	printf("%d\n", len);
	for(i = 0; i<=len; i++){
		for(j = 0; j<3 && p[i][j]; j++){

			if(p[i][j] >= '0' && p[i][j]<= '9'){
				flag = 1;
			}
			if(p[i][j] == ' '){
				end = p[i] + j - 1;
				if(flag){
					revstr(start, end);
					flag = 0;
				}
				start = p[i] + j + 1;
			}
						
		}
	}

	// for last word
	if(flag){
		end = p[i-1] + j - 1;
		revstr(start, end);
	}
}

void revstr(char* p, char* q){
	char temp;
	while(p<q){
		temp = *p;
		*p = *q;
		*q = temp;
	
		p++;
		q--;
	}
}
int my_strlen(char *s){
	int len;
	for(len = 0; s[len]; len++);
	return len;
}

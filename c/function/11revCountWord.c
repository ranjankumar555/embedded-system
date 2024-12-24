#include<stdio.h>
void revWord(char* s);
int countWord(char *s);
int len(char *s);
int main(){
	char str[30];
	printf("Enter the string: ");
	scanf("%d", str);

	revWord(str);
	countWord(str);

	return 0;
}
void revWord(char* s){
	int i, j=0, count=0;
	char temp[30], t, *q;
	for(i =0; s[i]; i++){
		if(s[i] != ' '){
			temp[j++] = s[i];
			
		}
		else{
			temp[j] ='\0';
			count += countWord(temp);
			q = s + len(temp) -1;
			while(temp < q){
				t = *temp;
				*temp = *q;
				*q = t;
				temp++;
				q--;
			}
			printf("%s", temp);
		}
		



int countWord(char *s){
	int count = 0;
	for(int i=0; s[i]; i++){
		if(s[i] <= '9' && s[i] >= '0')
		{
			count =1;
			break;
		}
	}
	return count;
}



int len(char* st){
int i;
for(i =0; st[i]; i++);
return i;
}

#include<stdio.h>
int main(){
	char s[20];
	char res[20];

	printf("ent string: ");
	scanf("%s", s);

	int c = 1, i,j=0;
	for(i = 0; s[i]; i++){
	       if(s[i]==s[i+1]){
			c++;
	       }
	       else{
		       res[j++] = s[i];
		       if(c!=1){
			       res[j++] = 48+c;
		       }
		       c=1;
	       }
	}
	res[j] = '\0';
	printf("generated string: %s\n", res);
	return 0;
}

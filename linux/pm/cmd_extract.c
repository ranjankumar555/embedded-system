#include<stdio.h>
#include<stdlib.h>
int count_comma(const char* s){
	int c = 0;
	while(*s){
		if(*s == ','){
			c++;
		}
		s++;
	}
	return c;
}
void extract_cmd(char** cmd, char* str){
	char* temp = str;
	int i=0,j=0,k=0, count = 0;

	while(str[i]){
		if(str[i] != ','){
			count++;
		}
		else{
			cmd[j] = (char*)malloc(sizeof(char)*count+1);
			if(cmd[j] == 0){
				perror("malloc");
			}
			while(count--){
				cmd[j][k] = temp[k];
				k++;
			}

			cmd[j][k] = '\0';
			count = 0,k = 0;
			j++;
			temp = str + i + 1;
		}
		i++;
	}	
	
	//for last command
	cmd[j] = (char*)malloc(sizeof(char)*count+1);
	if(cmd[j] == 0){
		perror("malloc");
	}
	while(count--){
		cmd[j][k] = temp[k];
		k++;
	}
	cmd[j][k] = '\0';
}
int main(){

	char** cmd = 0, str[30], *temp;
	int comma, count = 0, i = 0, j = 0, k = 0;
	
	printf("Enter command separated by comma(,): \n");
	scanf("%s", str);
	
	comma = count_comma(str)+1;
	cmd = (char**)malloc(sizeof(char*)*comma);

	extract_cmd(cmd, str);

	for(i = 0; i<comma; i++){
		printf("%s ", cmd[i]);
	}
	printf("\n");

	for(i = 0; i<comma; i++){
		system(cmd[i]);
	}

	printf("\n");

	return 0;
}

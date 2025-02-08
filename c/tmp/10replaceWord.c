#include<stdio.h>
#include<string.h>
int main(int argc, char** argv){
	if(argc!=4){
		printf("USAGE: \n");
		return 1;
	}
	
	FILE* fp = fopen(argv[1], "r");
	char s[100];
	
	if(fp==0){
		printf("%s file not present\n", argv[1]);
		return 1;
	}
	
	FILE* temp = fopen("tmp.txt", "w");
	if(temp == 0){
		printf("tmp.txt not present\n");
		return 1;
	}

	while(fgets(s, 100, fp)){
		if(strstr(s, argv[2])){
			fputs(temp, "%s ", argv[3]);
		}
		else{
			fputs(temp, "%s ", s);
		}
	}
	
	fclose(fp);
	fclose(temp);

	remove(argv[1]);
	rename("tmp.txt", argv[1]);

	return 0;
}

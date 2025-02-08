#include<stdio.h>
#include<stdlib.h>

int countLine(FILE* file);
int main(int argc, char** argv){
        if(argc!=2){
                printf("USAGE: ./a.out data1\n");
                return 1;
        }

        FILE* fp1;
        fp1 = fopen(argv[1], "r");

        if(!fp1){
                printf("file not present\n");
                return 1;
        }
	
	
	char s[300];
	
	int fst=1, lst;
	lst = countLine(fp1);
	printf("last line number = %d\n", lst);
	rewind(fp1);
	int c = 1;

	FILE* temp = fopen("tmp.txt","w");
	fgets(s, 300, fp1);
	while(fgets(s, 300, fp1)){
		c++;
		if(c!=lst){
			fputs(s,temp);
		}

	}
	fclose(fp1);
	fclose(temp);
	remove(argv[1]);
	rename("tmp.txt", argv[1]);

	return 0;
}

int countLine(FILE* file){
	int count =0;
	
	char buf[300];
	while(fgets(buf,300, file)){
		count++;
		}
	return count;
}




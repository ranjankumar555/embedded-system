#include<stdio.h>
#include<stdlib.h>
int main(int argc, char** argv){
        if(argc!=3){
                printf("USAGE: data1 data2 data3\n");
                return 1;
        }

        FILE* fp1;
        fp1 = fopen(argv[1], "r");

        if(!fp1){
                printf("file not present\n");
                return 1;
        }

	char s[300];
	
	int n=atoi(argv[2]);
	int c = 0;

	FILE* temp = fopen("tmp.txt","w");

	while(fgets(s, 300, fp1)){
		c++;
		if(c!=n){
			fputs(s,temp);
		}

	}

	remove(argv[1]);
	rename("tmp.txt", argv[1]);

	return 0;
}

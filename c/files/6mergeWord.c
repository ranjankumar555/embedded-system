#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** argv){
	if(argc != 4){
		printf("USAGE: ./a.out, file1 file2 file3\n");
		return 0;
	}
	FILE* fp, *fp1, *fp2;
	fp = fopen(argv[1], "r");
	fp1 = fopen(argv[2], "r");
	fp2 = fopen(argv[3], "a+");
	

	char s1[20], s2[20];
	int r1,r2;

	while(1){
		r1 = fscanf(fp, "%s ", s1);
		r2 = fscanf(fp1, "%s ", s2);

		if(r1 == -1 && r2 == -1){
			break;
		}

		if(r1 != -1){
			fprintf(fp2, "%s ", s1);
		}
		
		if(r2 != -1){
			fprintf(fp2, "%s ", s2);
		}

	}
	fprintf(fp2,"\n");

	fclose(fp);
	fclose(fp1);
	fclose(fp2);

	return 0;
}

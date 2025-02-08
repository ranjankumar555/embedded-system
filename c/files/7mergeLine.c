#include<stdio.h>
int main(int argc, char** argv){
	if(argc!=4){
		printf("USAGE: data1 data2 data3\n");
		return 1;
	}
	
	FILE* fp1, *fp2, *fp3;
	fp1 = fopen(argv[1], "r");
	fp2 = fopen(argv[2], "r");
	fp3 = fopen(argv[3], "a");

	if(!fp1 || !fp2 || !fp3){
		printf("file not present\n");
		return 1;
	}
	
	char s1[400], s2[400];
	char* res1, *res2;
	while(1){

		res1 = fgets(s1, 400, fp1);
		res2 = fgets(s2, 400, fp2);
		if(res1 == NULL && res2 ==NULL){
			break;
		}

		if(res1){
			fputs(s1, fp3);
		}

		if(res2){
			fputs(s2, fp3);
		}
	}
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);

	return 0;
}


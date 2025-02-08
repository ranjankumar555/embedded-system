#include<stdio.h>
int main(int argc, char** argv){
	if(argc != 4){
		printf("Usage: ./a.out fil1 file2 file3\n");
		return 1;
	}

	FILE *fp1,*fp2, *fp3;
	fp1 = fopen(argv[1], "r");
	fp2 = fopen(argv[2], "r");
	fp3 = fopen(argv[3], "a");

	if(!fp1 || !fp2 || !fp3){
		printf("File not present\n");
		return 1;
	}

	char ch1, ch2;
	while(1){

		ch1 = fgetc(fp1);
		ch2 = fgetc(fp2);

		if(ch1 == -1 && ch2 == -1){
			break;
		}

		if(ch1 != EOF){
			if(ch1 == ' '){
				//fseek(fp1, 1, SEEK_CUR);
				ch1 = fgetc(fp1);
			}
			fputc(ch1,fp3);
		}
		

		if(ch2 != EOF){
			fputc(ch2, fp3);
		}
	}
	
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	return 0;
}
		



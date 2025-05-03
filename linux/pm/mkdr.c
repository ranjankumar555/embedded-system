#include<stdio.h>
#include <sys/stat.h>
#include <sys/types.h>

int main(){

	int r = mkdir("new_folder", 0755);
	if(r==0){
		printf("folder created\n");
		
	}
	else{
		perror("mkdir");
		return -1;
	}

	return 0;
}



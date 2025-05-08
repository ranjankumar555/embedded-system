//#include "header.h"
#include<dlfcn.h>
#include<stdio.h>
int main(){
	int a, b, r;
	void* handler;
	int(*p)(int, int);

	handler = dlopen("./libxyz.so", RTLD_LAZY);
	if(handler == 0){
		printf("%s\n", dlerror());
		return 1;
	}

	p = dlsym(handler, "sum");
	if(p==0){
		printf("%s\n", dlerror());
		return 1;
	}
	r = (*p)(5,6);
	printf("The sum of 5 and 6 is %d\n", r);

	dlclose(handler);


	return 0;
}

#include<stdio.h>
#include<dlfcn.h>

int main(){

	void *dlibaddr;
	dlibaddr = dlopen("./libxyz.so", RTLD_LAZY);
	if(dlibaddr == 0){
		printf("%s\n", dlerror());
		return 1;
	}

	int (*p)(int, int);

	p = dlsym(dlibaddr, "sum");
	if(p ==0){
		printf("%s\n", dlerror());
		return 1;
	}
	int res = (*p)(10, 20);

	printf("sum af 10 and 20 is: %d\n", res);

	p = dlsym(dlibaddr, "mul");
	if(p == 0){
		printf("%s\n", dlerror());
		return 0;
	}
	res = (*p)(10,20);
	printf("product of 10 and 20 is %d\n", res);
	dlclose(dlibaddr);
	return 0;
}

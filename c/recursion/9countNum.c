#include<stdio.h>
int rec_fun_count_arr(int *p, int ele){
	static int i=0;
	static int c =0;
	if(i<ele){
		if(p[i]<99 && p[i]>39){
			c++;
		}
		i++;
		rec_fun_count_arr(p, ele);
	}
	else{
		return c;
	}
}
int main(){
	int a[6]={71,53,145,21,49,153};

	printf("count = %d\n", rec_fun_count_arr(a,6));
	return 0;
}

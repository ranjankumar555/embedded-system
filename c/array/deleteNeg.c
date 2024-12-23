#include<stdio.h>
void delete(int *a, int pos, int *len){
        for(int i = pos; i<*len-1; i++){
                a[i] = a[i+1];
        }
        (*len)--;
}

void print(int *a, int n){
        for(int i=0; i<n; i++){
                printf("%d ", *(a+i));
        }
        printf("\n");
}

int main(){
        int a[] = {-11, 12, -14, 13, -15, -18};
        
	int n = sizeof(a)/sizeof(a[0]);
	printf("After deleting Negative element: \n");
        for(int i=0; i<n; i++){
                if(a[i]< 0){
                        delete(a, i, &n);
                        i--;
                }
        }
        print(a, n);

        return 0;
}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int isVowel(char* );
struct student{
	int rollno;
	char name[20];
	float marks;
};
int main(){
	int i,n;
	struct student **st;
	printf("enter no. of record\n");
	scanf("%d",&n);
	st = malloc(sizeof(struct student*)*n);

	for(i=0; i<n; i++){
		st[i] = malloc(sizeof(struct student));
	}

	//printf("sizeof of st = %ld\n", sizeof(struct student));
	printf("rollno\tname\tmarks\n");
	for(i =0; i<n; i++){
		scanf("%d %s %f", &st[i]->rollno, st[i]->name, &st[i]->marks);
	}
	
	printf("Record scanned: \n");
	for(i =0; i<n; i++){
		printf("%d %s %f\n", st[i]->rollno, st[i]->name, st[i]->marks);
	}
	
	int op, len, j;
	printf("\n Select option: \n");
	printf("\t\t1) Get even rollno\n \
		2) Get name length is power of 2\n \
		3) Get first last letter vowel\n \
		4) Get marks between 50 to 80\n \
		5) Get highest marks\n \
		6) Get lowest marks\n \
		7) exit\n");

	while(1){
	printf("enter option: ");
	scanf("%d", &op);
		switch(op){
			case 1:
				printf("rollno\t name\t marks\n");
				for(i=0; i<n; i++){
					if((st[i]->rollno & 1)==0){
						printf("%d\t%s\t%f\n", st[i]->rollno, st[i]->name, st[i]->marks);
					}
				}
				break;
			case 2: printf("rollno\tmarks\n");
				for(i = 0; i<n; i++){
					len = strlen(st[i]->name);
					if((len & len-1) == 0){
						printf("%d\t%f\n", st[i]->rollno, st[i]->marks);
					}
				}
				break;

			case 3: printf("marks\n");
				for(i = 0; i<n; i++){
					if(isVowel(st[i]->name)){
						printf("%f\n", st[i]->marks);
					}
				}
				break;
			case 4: printf("student marks between 50 to 80\n");
				for(i =0; i<n; i++){
					if((st[i]->marks >= 50) && (st[i]->marks <=80)){
						printf("%s\n", st[i]->name);
					}
				}
					break;
			case 5: printf("rollno\tname\n");
				
			       	float maxm = 0;
				for(i =0; i<n; i++){
					if(st[i]->marks > maxm){
						maxm = st[i]->marks;
						j=i;
					}
				}
				printf("%d\t%s\n", st[j]->rollno, st[j]->name);
				break;

			case 6: printf("rollno\tname\n");
				
			       	float minm = 100;
				for(i =0; i<n; i++){
					if(st[i]->marks < minm){
						minm = st[i]->marks;
						j=i;
					}
				}
				printf("%d\t%s\n", st[j]->rollno, st[j]->name);
				break;
			case 7: exit(0);
			default: printf("wrong choice\n:");
		}
	}
	
	return 0;

}
int isVowel(char* p){
	int count =0;
	if(*p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u'){
		count++;
	}
	while(*p){
		p++;
	}
	if(*(p-1) == 'a' || *(p-1) == 'e' || *(p-1) == 'i' || *(p-1) == 'o' || *(p-1) == 'u'){
		count++;
	}

	return count == 2;
}
	


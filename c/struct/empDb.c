#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define N 6

typedef struct date{
	int day;
	int month;
	int year;
}date;

struct employee{
	char name[20];
	date dob;
	date doj;
	int salary;
};

void sortName(struct employee **emp);
void sort_dob(struct employee **emp);
void sort_doj(struct employee **emp);
void sortSalary(struct employee **emp);
void display(struct employee **);
int datecmp(date, date);
int main(){
	int i,j;
	struct employee **p;
	p = (struct employee**)malloc(sizeof(struct employee*)*N);
	for(i = 0; i<N; i++){
		p[i] = malloc(sizeof(struct employee));
	}
	/* scan data from file */
	FILE* fip = fopen("empip.txt","r");
	if(fip == 0){
		printf("empip.txt not present\n");
		exit(1);
	}
	for(i =0; i<N; i++){
		fscanf(fip,"%s",p[i]->name);
		fscanf(fip,"%d%d%d",&p[i]->dob.day, &p[i]->dob.month, &p[i]->dob.year);
		fscanf(fip,"%d%d%d",&p[i]->doj.day, &p[i]->doj.month, &p[i]->doj.year);
		fscanf(fip,"%d", &p[i]->salary);
	}


	//FILE* fop = fopen("empop.txt", "w");

/*
	//scan data from stdin
	for(i =0; i<N; i++){
		printf("Enter name: \n");
		scanf("%s",p[i]->name);
		printf("Enter dob: \n");
		scanf("%d%d%d",&p[i]->dob.day, &p[i]->dob.month, &p[i]->dob.year);

		printf("Enter doj: \n");
		scanf("%d%d%d",&p[i]->doj.day, &p[i]->doj.month, &p[i]->doj.year);
		printf("Enter salary: \n");
		scanf("%d", &p[i]->salary);
	}
	
*/	//print data
	display(p);	
	
	int op;
	while(1){
		printf("1)Sort the record by Name.\n");
		printf("2)Sort the record by DOB.\n");
		printf("3)Sort the record by DOJ.\n");
		printf("4)Sort the record by Salary.\n");
		printf("5)Display record.\n");
		printf("6)exit.\n");
		printf("enter choice: ");
		scanf("%d", &op);
		switch(op){
			case 1: sortName(p);
				break;
			case 2: sort_dob(p);
				break;
			case 3: sort_doj(p);
				break;
			case 4: sortSalary(p);
				break;
			case 5: display(p);
				break;
			case 6: exit(1);
				break;
			default:
				printf("\033[1;31mwrong choice\n\033[0m");
		}
	}
	return 0;
}
void sortName(struct employee **emp){
	int i,j;
	struct employee *temp;
	for(i =0; i<N-1; i++){
		for(j=0; j<N-i-1; j++){
			if(strcmp(emp[j]->name, emp[j+1]->name)>0){
				temp = emp[j];
				emp[j] = emp[j+1];
				emp[j+1] = temp;
			}
		}
	}
}
void sort_dob(struct employee **emp){
	int i,j;
	struct employee *temp;
	for(i =0; i<N-1; i++){
		for(j=0; j<N-i-1; j++){
			if(datecmp(emp[j]->dob, emp[j+1]->dob)>0){
				temp = emp[j];
				emp[j] = emp[j+1];
				emp[j+1] = temp;
			}
		}
	}
}
void sort_doj(struct employee **emp){
	int i,j;
	struct employee *temp;
	for(i =0; i<N-1; i++){
		for(j=0; j<N-i-1; j++){
			if(datecmp(emp[j]->doj, emp[j+1]->doj)>0){
				temp = emp[j];
				emp[j] = emp[j+1];
				emp[j+1] = temp;
			}
		}
	}
}
void sortSalary(struct employee **emp){
	int i,j;
	struct employee *temp;
	for(i =0; i<N-1; i++){
		for(j=0; j<N-i-1; j++){
			if(emp[j]->salary > emp[j+1]->salary){
				temp = emp[j];
				emp[j] = emp[j+1];
				emp[j+1] = temp;
			}
		}
	}
}
void display(struct employee **p){
	int i,j;
	printf("__________________________________________________\n");
	printf(" Name\t    DOB\t\t    DOJ\t\tSalary\n");
	for(i =0; i<N; i++){
		printf("%s\t",p[i]->name);
		printf("%02d-%02d-%04d\t",p[i]->dob.day, p[i]->dob.month, p[i]->dob.year);
		printf("%02d-%02d-%04d\t",p[i]->doj.day, p[i]->doj.month, p[i]->doj.year);
		printf("%d\n", p[i]->salary);
	}
	printf("__________________________________________________\n");
	

}
/* Return 1 if date1 < date2,
 * Return -1 if date1 > date2,
 * Return 0 if equals
 */
int datecmp(struct date date1, struct date date2){
	if(date1.year < date2.year)
		return 1;
	if(date1.year > date2.year)
		return -1;
	if(date1.month < date2.month)
		return 1;
	if(date1.month > date2.month)
		return -1;
	if(date1.day < date2.day)
		return 1;
	if(date1.day > date2.day)
		return -1;
	return 0;

}



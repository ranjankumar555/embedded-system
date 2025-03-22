#include<stdio.h>
#include<stdlib.h>
#define SUBJ 6
#define N 6
typedef struct st{
	int rn;
	char name[20];
	int mark[6];
	int total;
	char grade;
}student;

void calc_grade(student [] );
void sort_marks(student * );
void display(student );
int main(){
	int i,j;
	student stu[N];

	FILE* fp = fopen("input.txt","r");
	FILE* op = fopen("output.txt", "w");
	if(fp == NULL){
		printf("\"input.txt\" file not present\n");
		exit(1);
	}
	
	if(op == NULL){
		printf("\"output.txt\" file not present\n");
		exit(1);
	}

	for(i=0; i<N; i++){
		fscanf(fp, "%d%s", &stu[i].rn, stu[i].name);
	
	for(j =0; j<SUBJ; j++){
		fscanf(fp, "%d", &stu[i].mark[j]);
	}
	stu[i].total = 0;
	}
	
	calc_grade(stu);
	sort_marks(stu);

	fprintf(op,"RollNo\tName\tTotal\tGrade\n");
	fprintf(op, "------------------------------\n");
	printf("RollNo\tName\tTotal\tGrade\n");
	printf("------------------------------\n");
	for(i =0; i<N; i++){
		fprintf(op,"%d\t%s\t%d\t%c\n", stu[i].rn, stu[i].name, stu[i].total, stu[i].grade);
		display(stu[i]);
	}

	fprintf(op, "------------------------------\n");
	printf("------------------------------\n");
	fclose(fp);
	fclose(op);

	return 0;
}
void calc_grade(student stu[]){
	int i,j;
	for(i=0; i<N; i++){
		for(j=0; j<SUBJ; j++){
			stu[i].total += stu[i].mark[j];
		}
		if(stu[i].total > 500){
			stu[i].grade = 'A';
		}
		else if(stu[i].total > 400){
			stu[i].grade = 'B';
		}
		else if(stu[i].total > 250){
			stu[i].grade = 'C';
		}
		else{
			stu[i].grade = 'D';
		}
	}
}
void sort_marks(student *stu){
	int i,j;

	student temp;

	for(i=0; i<N-1; i++){
		for(j=0; j<N-i-1; j++){
			if(stu[j].total < stu[j+1].total){
				temp = stu[j];
				stu[j] = stu[j+1];
				stu[j+1] = temp;
			}
		}
	}
}

void display(student stu){
	printf("%d\t%s\t%d\t%c\n", stu.rn, stu.name, stu.total, stu.grade);

}

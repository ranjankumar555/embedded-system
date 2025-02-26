#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void ins_record(FILE*);
void del_record(FILE*);
void disp_record(FILE*);
int search(FILE*, char*);
void modify_record(FILE*);
void list_record(FILE*);
void booksold(FILE*);

struct{
	char name[20];
	int copies;
	float cost;
}book;

int main(){
	
	FILE* fp = fopen("book.txt", "r+");
	if(fp==NULL){
		printf("File not present\n");
		return 1;
	}

	int op;
	while(1){
		printf(" 1) Insert a new record\n");
		printf(" 2) Delete a record\n");
		printf(" 3) Display a record\n");
		printf(" 4) modify existing record\n");
		printf(" 5) list all record\n");
		printf(" 6) Book sold\n");
		printf(" 7) Exit\n");
		printf("Enter your choice\n");
		scanf("%d", &op);

		switch(op){

			case 1: ins_record(fp); break;
			case 2: del_record(fp); break;
			case 3: disp_record(fp); break;
			case 4: modify_record(fp); break;
			case 5: list_record(fp); break;
			case 6: booksold(fp); break;
			case 7: fclose(fp);
				exit(0);
			default: printf("Wrong choice\n");
		}
	}
	return 0;
}
void ins_record(FILE* fp){
	fseek(fp, 0, 2);
	printf("Enter book name: ");
	scanf("%s", book.name);
	printf("Enter no of copies of book: ");
	scanf("%d", &book.copies);
	printf("Enter cost of book: ");
	scanf("%f", &book.cost);

	fwrite(&book, sizeof(book), 1, fp);
}

void del_record(FILE* fp){
	FILE* tmp;
	char name[20];
	printf("Enter the name of book to be deleted from database: ");
	scanf("%s", name);

	if(search(fp,name) == 0){
		printf("This book is not found\n");
		return;
	}
	rewind(fp);
	tmp = fopen("tempfile", "w");

	while(fread(&book, sizeof(book), 1, fp)==1){
		if(strcmp(name, book.name) != 0){
			fwrite(&book, sizeof(book), 1, tmp);
		}
	}
	fclose(fp);
	fclose(tmp);
	remove("book.txt");
	rename("tempfile", "book.txt");
	printf("\nRecord deleted\n\n");
	fp = fopen("book.txt", "r+");
}

void disp_record(FILE* fp){
	char name[20];
	printf("enter the name of the book: ");
	scanf("%s", name);
	if(search(fp, name)==1){
		printf("\nName\t%s\n", book.name);
		printf("\nCopies\t%d\n", book.copies);
		printf("\nCost\t%f\n", book.cost);
	}

}

int search(FILE* fp, char* name){
	rewind(fp);
	while(fread(&book, sizeof(book), 1, fp)== 1){
		if(strcmp(name, book.name) == 0){
			return 1;
		}
	}
	return 0;
}

void modify_record(FILE* fp){
	char name[20];
	printf("enter the name of book to be modified: ");
	scanf("%s", name);
	if(search(fp, name)==1){
		printf("Enter new data\n\n");
		printf("Enter book name: ");
		scanf("%s",book.name);	
		printf("Enter no. of copies: ");
		scanf("%d",&book.copies);	
		printf("Enter the cost of book: ");
		scanf("%f",&book.cost);
		
		fseek(fp, -sizeof(book), 1);
		fwrite(&book, sizeof(book), 1, fp);
		printf("\nRecord successfully modified\n\n");
	}
}
void list_record(FILE* fp){
	rewind(fp);
	printf("\nName\tCopies\t\tCost\n\n");
	while(fread(&book, sizeof(book),1,fp)==1){
		printf("%s\t", book.name);
		printf("%d\t\t", book.copies);
		printf("%f\n", book.cost);
	}
	printf("\n");
}
void booksold(FILE* fp){
	char name[20];
	printf("Enter the name of book to be sold: ");
	scanf("%s", name);
	if(search(fp, name)==1){
		if(book.copies>0){
			book.copies--;
			fseek(fp, -sizeof(book), 1);
			fwrite(&book, sizeof(book),1,fp);
			printf("One book sold\n");
			printf("Now no. of copies = %d\n", book.copies);
		}
		else{
			printf("Book is out of stock\n");
		}
	}
}

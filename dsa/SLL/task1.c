/* write a function in SLL to print node info which name 1st letter is capital Letter */

#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int rn;
	char name[20];
	float marks;
	struct node* next;
}node;

void add_begin(node** );
void show_caps(node *);
void print(node *);
int main(){
	node *headptr = NULL;
	add_begin(&headptr);
	add_begin(&headptr);
	add_begin(&headptr);
	add_begin(&headptr);
	add_begin(&headptr);
	
	print(headptr);
	show_caps(headptr);

	return 0;
}
void add_begin(node** head){
	
	node *new = (node*)malloc(sizeof(node));
	
	printf("enter name: ");
	scanf("%s", new->name);
	
	printf("enter rollno: ");
	scanf("%d", &new->rn);
	
	printf("enter marks: ");
	scanf("%f", &new->marks);

	new->next = *head;
	*head = new;
}
void print(node * temp){
	if(temp == 0){
		printf("List is empty\n");
		exit(1);
	}
	while(temp!=NULL){
		printf("%d\t%s\t%f\n", temp->rn, temp->name, temp->marks);
		temp = temp->next;
	}
}
void show_caps(node* temp){
	if(temp == 0){
		printf("List is empty\n");
		exit(0);
	}
	int len;
	while(temp!=NULL){
		for(len = 0; temp->name[len]; len++);
		if(temp->name[len-1] >= 'A' && temp->name[len-1] <= 'Z')
			printf("%s\n", temp->name);

		temp = temp->next;
	}
}

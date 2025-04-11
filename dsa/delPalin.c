#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node{
	int rollno;
	char name[20];
	float marks;
	struct node* next;
} node;

void insert(node**, int, char*, float);
void deleteNode(node**);
int ispalin(char*);
void print(node*);

int main(int argc, char** argv){
	if(argc!=2){
		printf("USAGE: ./a.out filename\n");
		return 1;
	}
	FILE* fp = fopen("stu.txt", "r");	
	node * head = NULL;
	node obj;
	while(fscanf(fp, "%d %s %f",&obj.rollno, obj.name, &obj.marks)==3){
		insert(&head, obj.rollno, obj.name, obj.marks);
	}

	print(head);

	deleteNode(&head);
	print(head);
	return 0;
}
void deleteNode(node** head){
	if(*head == NULL){
		printf("List is empty\n");
		return;
	}
	node* cur = *head;
	node* prev= *head;
	while(cur){
		
		if(ispalin((*head)->name)){
			prev  = *head;
			*head = prev->next;
			free(prev);
			cur = *head; 
			

		}
		else if(ispalin(cur->name)){
			prev->next = cur->next;
			free(cur);
			cur = prev;
		}
		prev = cur;
		cur = cur->next;
	}
}

void insert(node** head, int roll, char *s, float m){
	node* temp = *head;
	node* newNode;
	if(*head == NULL){
		newNode = malloc(sizeof(node));
		newNode->rollno = roll, strcpy(newNode->name, s), newNode->marks = m;
	       	newNode->next = *head;
		*head = newNode;

	}
	else{
		while(temp->next){
			temp = temp->next;
		}
		newNode = malloc(sizeof(node));
		newNode->rollno = roll, strcpy(newNode->name, s), newNode->marks = m;
		newNode->next = temp->next;
		temp->next = newNode;
	}

}	

void print(node* head){
	if(head == NULL){
		printf("No record found\n");
		return;
	}
	while(head){
		printf("%d\t %s\t\t %f\n", head->rollno, head->name, head->marks);
		head = head->next;
	}
	printf("\n");
}
int ispalin(char* str){
	int len;
	for(len = 0; str[len]; len++);
	char *end = str+len-1;
	while(str<end){
		if(*str != *end) return 0;
		str++;
		end--;
	}
	return 1;
}
	


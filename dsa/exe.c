#include<stdio.h>

typedef struct SLL{
	int rollno;
	char name[20];
	float marks;
	struct SLL* next;
}SLL;

void addAfter(SLL** head, int key);
void addBefore(Sll** head, int key);
void addatpos(SLL** head, int pos);
void addinSorted(SLL** head, int data);

void delbegin(SLL** head);
void delend(SLL** head);
void delmid(SLL** head, int pos);
void print(SLL* head);
int main(){
	SLL* head = NULL;
	
	addAfter(&head);

}
void addAfter(SLL* head, int key){
	SLL* temp, newNode;
	temp = *head;
	
	while(temp!=NULL){
		if(temp->data == key){
			newNode = (SLL*)malloc(sizeof(SLL));
			newNode->next = temp->next;
			temp->next = newNode;

			printf("enter rollNo: ");
			scanf("%d", &newNode->rollno);
			printf("enter name: ");
			scanf("%s", newNode->name);
			printf("enter marks: ");
			scanf("%f", &newNode->marks);
			return;
		}
		temp = temp->next;
	}
	printf("%d is not present in the list\n", key);
}
void print(SLL* head){
	while(head! = NULL){



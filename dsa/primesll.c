#include<stdio.h>
#include<stdlib.h>
typedef struct SLL{
	int data;
	struct SLL* next;
}sll;
void insert(sll** head, int data){
	sll* newNode = (sll*)malloc(sizeof(sll));
	newNode->data = data;
	newNode->next = *head;
	*head = newNode;
}
void print(sll* head){
	if(head == NULL){
		printf("list is empty\n");
		return;
	}
	while(head){
		printf("%d ", head->data);
		head = head->next;
	}
	printf("\n");
}
int isPrime(int num){
	int i;
	for(i = 2; i<num; i++){
		if(num%i==0){
			return 0;
		}
	}
	if(i==num){
		return 1;
	}
}

void checkPrime(sll* head){
	sll* temp = head;
	while(temp){
		if(isPrime(temp->data)){
			printf("%d is rollno\n", temp->data);
		}
		temp = temp->next;
	}
	printf("\n");
	
}
int main(){
	sll* head = NULL;
	insert(&head, 11);
	insert(&head, 22);
	insert(&head, 33);
	insert(&head, 47);

	print(head);
	checkPrime(head);
	return 0;
}


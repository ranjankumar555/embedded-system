#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
		
		Node(int val=0){
			data = val;
			next = nullptr;
		}
};
class SLL{
	public:
		Node* head;
		SLL(){
			head = nullptr;
		}
		void insertFront(int data){
			//create a New Node
			Node* newNode = new Node(data);
			
			/*check list is empty -> not necessary here as it will work for both empty and non empty list;
			if(head == nullptr){
				head = newNode;
				return;
			}
			*/
			newNode->next = head;
			head = newNode;
		}

		//print the list
		void print(){
			Node* temp = head;
			while(temp != nullptr){
				cout<<temp->data<<" ";
				temp = temp->next;
			}
			cout<<endl;
		}

		// To free memory
		~SLL(){
			Node* current = head;
			while(current != nullptr){
				Node* temp = current->next;
				delete current;
				current = temp;
			}
		}
};

int main(){
	SLL *node = new SLL();
	node->insertFront(1);
	node->insertFront(2);
	node->insertFront(3);
	node->insertFront(4);
	node->insertFront(5);
	
	node->print();
	delete node;
	return 0;
}

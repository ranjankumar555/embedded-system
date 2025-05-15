#include<iostream>
using namespace std;
#define SIZE 5
template<class type>
class Stack{
	private:
		int TOP;
		type stk[SIZE];
	public:
		Stack(){
			TOP = -1;
			for(int i = 0; i<SIZE; i++){
				stk[i] = 0;
			}
		}
		void push();
		int pop();
		int top();
		void display_stack();
};
template<class type>
void Stack<type>::push(){

}
template<class type>
int Stack<type>::pop(){



	return stk[TOP];
}
template<class type>
int Stack<type>::top(){
	return stk[TOP];
}
template<class type>
void Stack<type>::display_stack(){
	int i;
	for(i = 0; i<TOP; i++){
		cout<<stk[i]<<" ";
	}
	cout<<endl;
}
int main(){

	int op, op1, op2, wrongOptionCount=0, flag = 0;

	Stack<int> i_stk;
	while(1){
		cout<<"******** Main Menu *******"<<endl;
		cout<<"----------------------------------------"<<endl;
		cout<<"1) integer stack"<<endl;
		cout<<"2) char stack"<<endl;
		cout<<"3) float stack"<<endl;
		cout<<"4) double stack"<<endl;
		cout<<"5) string stack"<<endl;
		cout<<"6) exit"<<endl;
		cout<<"select option: ";  // colour coding
		cin>>op;
		cout<<"----------------------------------------"<<endl;
		switch(op){
			case 1: cout<<"****** int stack application ready to use ******"<<endl; //  blue color coding krna h
				if(wrongOptionCount == 1){
l1:
					cout<<"continue 1)old_stack 2)new_stack [1/2]: ";
					cin>>op2;
					if(op2 == 1){ ; }
					else if(op2 == 2){
						cout<<"new_stack created"<<endl;
						// constructor call krke reset kro
						i_stk = Stack<int>();
					}
					else{
						cout<<"invalid input..."<<endl;
						cout<<"enter [1]old_stack, [2]new_stack"<<endl;
						// goto use krke phir se ask kro new stack or old stack;
						goto l1;
					}

				}
				while(1){
					cout<<"******** Sub Menu *******"<<endl;
					cout<<"----------------------------------------"<<endl;
					cout<<"1) push"<<endl;
					cout<<"2) pop"<<endl;
					cout<<"3) top"<<endl;
					cout<<"4) display stack"<<endl;
					cout<<"5) main menu"<<endl;
					cout<<"select option: ";  // colour coding
					cin>>op1;
					cout<<"----------------------------------------"<<endl;
					switch(op1){
						case 1: i_stk.push();
							break;
						case 2: i_stk.pop();
							break;
						case 3: i_stk.top();
							break;
						case 4: i_stk.display_stack();
						case 5: flag = 1; break; // go to main menu fix it

					}
					if(flag){
						flag = 0;
						break;
					}

				}
				wrongOptionCount = 0;
				break;

			case 2: cout<<"****** char stack application ready to use ******"<<endl; // blue
				wrongOptionCount = 0;
				break;

			case 3: cout<<"****** float stack application ready to use ******"<<endl; // blue
				wrongOptionCount = 0;
				break;

			case 4: cout<<"****** double stack application ready to use ******"<<endl; // blue
				wrongOptionCount = 0;
				break;

			case 5: cout<<"****** string stack application ready to use ******"<<endl; // blue
				wrongOptionCount = 0;
				break;
			case 6: 
				cout<<"Thank you for using our application"<<endl;
				cout<<"Bye..."<<endl;
				exit(0);
			default: cout<<"please read the options carefully"<<endl; // blue color coding krna h
				 if(wrongOptionCount == 1){ // 2nd chance
					 cout<<"Last chance, please take care"<<endl;    // light red
				 }
				 if(wrongOptionCount == 2){ //like 0th indexing; 3rd chance
					 cout<<"************************************"<<endl;   // dark red
					 cout<<"Thanks for using our application"<<endl;     
					 cout<<"please read the manual and comeback properly"<<endl;
					 cout<<"*************************************"<<endl;
					 exit(0);
				 }
				 wrongOptionCount++;
		}
	}


	return 0;
}

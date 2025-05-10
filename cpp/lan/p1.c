#include<iostream>
using namespace std;
void swap(int& a, int& b);
int main(){
	int a,b;
	cout<<"enter a and b"<<endl;
	cin>>a>>b;
	cout<< "before swap a = "<<a<<", b = "<<b<<endl;
	swap(a,b);

	cout<< "After swap a = "<<a<<", b = "<<b<<endl;
	return 0;
}
void swap(int& a, int& b){
	/*int temp;
	  temp = a;
	  a = b;
	  b = temp;*/

	a = a^b;
	b = a^b;
	a = a^b;

}

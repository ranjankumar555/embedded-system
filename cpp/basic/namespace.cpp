#include<iostream>
using namespace std;
namespace hdfc{
	int a = 30;
	void func(){
		cout<<"hdfc"<<endl;
	}
}
namespace icici{
	int a = 30;
	void func(){
		cout<<"icici"<<endl;
	}
}
//using namespace hdfc;
int main(){
	using namespace icici;
	cout<<a<<endl;
	func();
}

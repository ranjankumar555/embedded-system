#include<iostream>
using namespace std;

class A{
	int x;
	public:
	void set_x(int a){
		x = a;
	}
	void get_x(){
		cout<<x<<endl;
	}
};
class B: public A{
	int y;
	public:
	void set_y(int a){
		y = a;
	}
	void get_y(){
		cout<<y<<endl;
	}
};
class C: public A{
	int z;
	public:
	void set_z(int a){
		z = a;
	}
	void get_z(){
		cout<<z<<endl;
	}
};
class D: public A{
	int n;
	public:
	void set_n(int a){
		n = a;
	}
	void get_n(){
		cout<<n<<endl;
	}
};

int main(){
	
	cout<<"size d= "<<sizeof(D)<<endl;
	cout<<"size a= "<<sizeof(A)<<endl;
	cout<<"size b= "<<sizeof(B)<<endl;
	cout<<"size c= "<<sizeof(C)<<endl;

	return 0;
}




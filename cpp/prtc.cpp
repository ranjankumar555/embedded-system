#include<iostream>
using namespace std;

class Base{
	int x, y;
	public:
		void set_data(int a, int b){
			x= a;
			y=b;
		}
		void get_data(){
			cout<<x<<" "<<y<<endl;
		}
};
class Derived:public Base{
	int p, q;
	public:
		void set_data(int a, int b){
			p= a;
			q=b;
		}
		void get_data(int x, int y);
};

int main(){
	Derived d;
	d.set_data(12,24);
	d.get_data();
}

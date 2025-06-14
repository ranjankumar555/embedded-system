#include<iostream>
using namespace std;

class base{
	int x,y;
	public:
		base():x(0), y(0){
		cout<<"default"<<endl;
		}
		base(int a,int b){
			cout<<"p cons base"<<endl;
			x = a,y=b;
		}
		~base(){
			cout<<"Base destructor"<<endl;
		}
		void get_data(){
			cout<<x<<" "<<y<<endl;
		}
};

class d:public base{
	int m,n;
	public:
		d(){}
		d(int a, int b,int c, int d):base(a,b),m(c), n(c){
			cout<<"p cons derived"<<endl;
		}
		~d(){
			cout<<"derived destructor"<<endl;
		}
		void get_data1(){
			base::get_data();
			cout<<m<<" "<<n<<endl;
		}
};

int main(){
	base b;
	b.get_data();
	d der(100,200, 300, 400);
	b = der;
	der.get_data();


}


#include<iostream>
using namespace std;
class B;
class C;
class A{
	int x;
	public: 
	friend void set(A&,B&,C&);
	friend void get(A,B,C);

	friend void set1(A*,B*,C*);
	friend void get1(A,B,C);
};
class B{
	int y;
	public:

	friend void set(A&,B&,C&);
	friend void get(A,B,C);

	friend void set1(A*,B*,C*);
	friend void get1(A,B,C);
};
class C{
	int z;
	public:
	friend void set1(A&,B&,C&);
	friend void get1(A,B,C);

	friend void set1(A*,B*,C*);
	friend void get1(A,B,C);
};
void set(A& a, B& b, C& c){
	cout<<"enter x y and z: "<<endl;
	cin>>a.x>>b.y>>c.z;
}
void get(A a, B b, C c){
	cout<<a.x<<" "<<b.y<<" "<<c.z<<endl;
}
void set1(A* a, B* b, C* c){
	cout<<"enter x y and z: "<<endl;
	cin>>a.x>>b.y>>cz;
}
void get1(A a, B b, C c){
	cout<<a.x<<" "<<b.y<<" "<<c.z<<endl;
}
int main(){
	A a1;
	B b1;
	C c1;

	// pass by reference
//	set(a1,b1,c1);
//	get(a1,b1,c1);

	// pass by address
	set1(&a1,&b1,&c1);
	get1(a1,b1,c1);

	return 0;
}

#include<iostream>
using namespace std;
class A{
	int x;
	int y;
	int z;
	public:
	A():x(0),y(0),z(0){};
	A(int a, int b, int c):x(a),y(b),z(c){};

	friend A operator++(A&, int);
	friend A operator++(A&);
	void display(){
		cout<<x<<" "<<y<<" "<<z<<endl;
	}
};
A operator++(A& t, int){
	/*A temp;
	temp.x = t.x++;
	temp.y = t.y++;
	temp.z = t.z++;

	return temp;*/

	return A(t.x++, t.y++, t.z++);
}
A operator++(A& t){
	/*A temp;
	temp.x = ++t.x;
	temp.y = ++t.y;
	temp.z = ++t.z;

	return temp;*/
	return A(++t.x, ++t.y, ++t.z);
}

int main(){

	A a(10,20,30);
	A b, c;
	//a.display();
	
	b = a++;
	b.display();
	
	c = ++a;
	c.display();

	return 0;
}


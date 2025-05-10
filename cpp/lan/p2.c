#include<iostream>
using namespace std;
void swap(int& a, int &b);
void swap(float& a, float& b);
void swap(char& a, char& b);
int main(){
	int a, b;
	cout<<"Enter a and b"<<endl;
	cin>>a>>b;
	swap(a,b);
	cout<<a<<" "<<b<<endl;


	float f1,f2;
	cout<<"Enter f1 and f2"<<endl;
	cin>>f1>>f2;
	swap(f1,f2);
	cout<<f1<<" "<<f2<<endl;


	cout<<"enter c1 and c2"<<endl;
	char c1,c2;
	cin>>c1>>c2;
	swap(c1,c2);
	cout<<c1<<" "<<c2<<endl;

	return 0;
}
void swap(int& a, int &b){
	a = a^b;
	b = a^b;
	a = a^b;

}
void swap(float& a, float& b){
	float temp;
	temp = a;
	a = b;
	b = temp;
}
void swap(char& a, char& b){
	a = a^b;
	b = a^b;
	a = a^b;
}

#include<iostream>
using namespace std;
void disp(int i, float f=20.5f){
	cout<<i<<" "<<f<<endl;
}
void disp(float f, int i){
	cout<<i<<" "<<f<<endl;
}

int main(){
	disp(1);
	disp(10.3f, 23);
}

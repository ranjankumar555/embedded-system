#include<iostream>
using namespace std;
int main(){

	int arr[5] = {10,20,30,40,50};
	int (&rv)[5] = arr;
	for(int x: rv){
		cout<<x<<" ";
	}
	cout<<endl;
	return 0;
}

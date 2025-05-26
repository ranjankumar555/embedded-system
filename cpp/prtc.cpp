#include<iostream>
//#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
	string s;
	s = "vector";
	reverse(s.begin()+1, s.end()-1);
	cout<<s<<endl;
	return 0;
}


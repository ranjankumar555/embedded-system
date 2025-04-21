#include<iostream>
#include<cstring>
using namespace std;

class shallow{
	char* s;
	public: 

	shallow(const char* p){
		s = new char[strlen(p) + 1];
		strcpy(s, p);
	}
	shallow(shallow t){
		cout<<"Deep copy"<<endl;
		//s = new char[strlen(t.s)+1];
		//strcpy(s, t.s);
		s = t.s;
	}
	void get_string(){
		cout<<"string - "<<s<<endl;
	}
	void modify(){
		s[0] = 's';
	}
};

int main(){
	shallow s1("Vector");
	shallow s2 = s1;

	s1.get_string();
	s2.get_string();

	cout<<"**************************"<<endl;

	s1.modify();
	s1.get_string();
	s2.get_string();
}

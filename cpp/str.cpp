#include<iostream>
#include<cstring>
using namespace std;
class String{
	private:
	int length;
	char *str;
	
	public:
	String():length(0),str(0){}
	
	String(const char* s){
		length = strlen(s);
		str = new char[length+1];
		strcpy(str, s);
	}
	String(String& t){ // s2(s1);
		length = strlen(t.str);
		str = new char[length + 1];
		strncpy(str, t.str, length);
	}

	void get(){
		if(str==0) {
			return;
		}
		cout<<str<<endl;
	}

	void operator=(const char *s){  // s1 ="bangalore"
		strcpy(str, s);
		cout<<"*this = "<<*this<<endl;
	}
	/*String& operator=(String str1, String str2){ // s1=s2; object assignment

	}*/
	char& operator[](int i){
		return str[i];
	}

	friend ostream& operator<<(ostream &t,String t1);
};
ostream& operator<<(ostream &t,String t1){
	for(int i = 0; t1.str[i]; i++){
		t<<t1.str[i];
	}
	
	return t;
}
int main(){
	String s1("Vector india");
	String s2(s1);
	s1.get();

	s1 = "Bangalore";
	cin>>s1[0];
	s1[2] = 'm';
	s1.get();

	for(int i=0; s1[i]; i++){
		cout<<s1[i]<<" ";
	}
	cout<<endl;
	s2.get();

	

	return 0;

}


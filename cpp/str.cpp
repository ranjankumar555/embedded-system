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

	void get(){
		if(str==0) {
			return;
		}
		cout<<str<<endl;
	}

	void operator=(const char *s){
		strcpy(str, s);
	}

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
	s1.get();

	s1 = "Bangalore";
	cin>>s1[0];
	s1.get();

	for(int i=0; s1[i]; i++){
		cout<<s1[i]<<" ";
	}
	cout<<endl;
	return 0;

}


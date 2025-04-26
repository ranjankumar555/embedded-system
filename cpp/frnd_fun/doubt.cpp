#include<iostream>
#include<cstring>
using namespace std;
#define ISVOWEL(x) (x == 'A' || x == 'E' || x == 'I' || x == 'U' || x == 'O')
class str{
	char *s = nullptr;
	public:
	str(const char* p){
		s = new char[strlen(p)+1];
		strcpy(s,p);
		cout<<"m/r allocated"<<endl;
	}

	~str(){
		if(s!=0)
		{
			delete []s;
			s=0;
		}
		cout<<"m/r deallocated"<<endl;
	}
	void get_data(){
		cout<<s<<endl;
	}

	friend int count_vowels(str&);
};
int count_vowels(str &t){
	int c = 0;
	for(int i = 0; t.s[i]; i++){
		if(ISVOWEL(t.s[i])) c++;
	}
	//t.s=0; //jugad; agar hm without refernce frnd fun me argument pass krte h to, this will make s = 0; for t object only;
	// and avoid double free detected.
	return c;
}

int main(){
	str obj("VECTOR");
	int res = count_vowels(obj);
	cout<<"count  = "<<res<<endl;
	obj.get_data();
	return 0;
}



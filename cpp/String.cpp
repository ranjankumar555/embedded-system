#include<iostream>
using namespace std;

// Non member function prototype
unsigned int my_strlen(const char *ptr);
void my_strcpy(char*, const char*, int);

//String class implementation
class String{
	private: 
	char *str = nullptr;
	unsigned int length = 0;
	
	public:
	String():str(nullptr), length(0){}; // default constructor; string s1;
	String(const char* p){  //parameterised constructor; string s2("Ranjan")
		length = my_strlen(p);
		str = new char[length+1];
		my_strcpy(str, p, length);
	}

	String(String& t){ // deep copy constructor; s2 = s1;
		length = my_strlen(t.str);
		str = new char[length + 1];
		my_strcpy(str, t.str, length);
	}
	
	//member function
	void getstr(void);
	

};
void String :: getstr(){
		if(str==nullptr) return;
		cout<<str<<endl;
	}

// main function
int main(){
	String s1("vector india");
	s1.getstr();
	
	String s2(s1);
	s2.getstr();
	return 0;
}

// Non member function definition
unsigned int my_strlen(const char *ptr){
	int len;
	for(len=0; ptr[len]; len++);
	return len;
}
void my_strcpy(char* dest, const char* src, int len){
	int i;
	for(i = 0; i<len && *(src+i); i++){
		*(dest+i) = *(src +i);
	}
	*(dest+i) = '\0';
}



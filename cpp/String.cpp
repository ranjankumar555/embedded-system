#include<iostream>
using namespace std;

// Non member function prototype
unsigned int mystrlen(const char *ptr);
void mystrcpy(char*, const char*, int);

/*** String class implementation ***/
class String{
	private: 
	char *str;
	unsigned int length;
	
	public:
 	/*** default constructor; string s1; ***/
	String();
	
	/*** parameterised constructor; string s2("Ranjan") ***/
	String(const char* p);
	
	/*** deep copy constructor; s2 = s1; ***/
	String(String& t);
	
	/*** member function ***/
	void getstr(void);
	

	/*** operator overloaded member function ***/
	String& operator =(String& s2);
	String& operator +(String& S2);
	char& operator [](int i);
	bool operator >(String s2);
	bool operator <(String s2);
	bool operator >=(String s2);
	bool operator <=(String s2);
	bool operator !=(String s2);
	bool operator ==(String s2);
	friend ostream& operator <<(ostream& out, String& obj);
	friend istream& operator >>(istream& in, String& obj);

	/*** friend function ***/
	friend unsigned int my_strlen(const char* s);
	friend void my_strcpy(char* dest, const char* src);
	friend void my_strncpy(char* dest, const char* src, unsigned const int len);
	friend int my_strcmp(const char* s1, const char* s2);
	friend char* my_strcat(char* s1, const char* s2);
	friend char* my_strncat(char* s1, const char* s2, unsigned const int len);
	friend char* my_strrev1(char* str);
	friend char* my_strrev2(char* startAddr, char* endAddr);
	friend char* my_strupper(char* str);
	friend char* my_strlower(char* str);
	friend char* my_strchr(char* str, char ch);
	friend char* my_strrchr(char* str, char ch);
	friend char* my_strstr(const char* mainstr, const char* substr);
};
/*** default constructor; string s1; ***/
String :: String():str(nullptr), length(0){};

/*** parameterised constructor; string s2("Ranjan") ***/
String :: String(const char* p){
	length = mystrlen(p);
	str = new char[length+1];
	my_strcpy(str, p, length);
}

/*** deep copy constructor; s2 = s1; ***/
String :: String(String& t){
	length = mystrlen(t.str);
	str = new char[length + 1];
	mystrcpy(str, t.str, length);
}
void String :: getstr(){
	if(str==nullptr) return;
	cout<<str<<endl;
}

/*** operator overloaded member function ***/
String& :: String operator =(String& s2){    // s1 = s2;
	int len_s1 = mystrlen(str);
	int len_s2 = mystrlen(s2.str);
	if(len_s2 > len_s1){
		delete []str;
		str = new char[s2_len+1];
	}
	mystrcpy(str, s2.str, s2_len);
	return *this;
}
String& :: String operator +(String& S2){
	int len_s1 = mystrlen(str);
	int len_s2 = mystrlen(s2.str);


}
char& String :: operator [](int i){
	return str[i];
}
bool String :: operator >(String s2){

}
bool String :: operator <(String s2){

}
bool String :: operator >=(String s2){

}
bool String :: operator <=(String s2){

}
bool String :: operator !=(String s2){

}
bool String :: operator ==(String s2){
	int i = 0;
	while(*(str+i)){
		if(*(str+i) != *(s2.str +i)){ // s2.str; might unauthorize memory access after '\0'
			return 0;
		}
		i++;
	}
	if(*(str+i) == '\0' && *(s2.str + i) == '\0')
		return 1;
	return 0;
}

/*** overloaded operator friend function ***/
ostream& operator <<(ostream& out, String& obj){
	out<<obj.str;
	return out;
}
istream& operator >>(istream& in, String& obj){
	in>>obj.str;
	return in;
}

/*** friend function ***/
unsigned int my_strlen(const char* s){

}
void my_strncpy(char* dest, const char* src, unsigned const int len){

}
int my_strcmp(const char* s1, const char* s2){

}
char* my_strcat(char* s1, const char* s2){

}
char* my_strncat(char* s1, const char* s2, unsigned const int len){

}
char* my_strrev1(char* str){

}
char* my_strrev2(char* startAddr, char* endAddr){

}
char* my_strupper(char* str){

}
char* my_strlower(char* str){

}
char* my_strchr(char* str, char ch){

}
char* my_strrchr(char* str, char ch){

}
char* my_strstr(const char* mainstr, const char* substr){


}

/*** main function ***/
int main(){
	String s1("vector india");
	s1.getstr();
	
	String s2(s1);
	s2.getstr();
	return 0;
}

// Non member function definition
unsigned int mystrlen(const char *ptr){
	int len;
	for(len=0; ptr[len]; len++);
	return len;
}
void mystrcpy(char* dest, const char* src, int dlen){
	int i;
	for(i = 0; i<dlen && *(src+i); i++){
		*(dest+i) = *(src +i);
	}
	*(dest+i) = '\0';
}



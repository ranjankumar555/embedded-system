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
	char* begin(void);
	char* end(void);	

	/*** operator overloaded member function ***/
	String& operator =(String& s2);
	String& operator =(char* ptr);
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
	friend unsigned int my_strlen(String& s);
	friend void my_strcpy(String& s1, String& s2);
	friend void my_strncpy(String& dest, const String& src, unsigned const int len);
	friend int my_strcmp(const String& s1, const String& s2);
	friend String& my_strcat(String& s1, const String& s2);
	friend String& my_strncat(String& s1, const String& s2, unsigned const int len);
	friend String& my_strrev1(String& str);
	friend void my_strrev2(String& startAddr, String& endAddr);
	friend String& my_strupper(String& str);
	friend String& my_strlower(String& str);
	friend bool my_strchr(String& str, char ch);
	friend bool my_strrchr(String& str, char ch);
	friend bool my_strstr(const String mainstr, const String& substr);
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

/*** member function ***/
void String :: getstr(){
	if(str==nullptr) return;
	cout<<str<<endl;
}

char* String :: begin(void){
	return str;
}

char* String :: end(void){
	length = strlen(str);
	return str+length-1;
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
String& operator =(char* ptr){

}
String& :: String operator +(String& S2){
	int len_s1 = mystrlen(str);
	int len_s2 = mystrlen(s2.str);


}
char& String :: operator [](int i){
	return str[i];
}
bool String :: operator >(String s2){
	int i = 0;
	while(*(str+i) && *(s2.str+i)){
		if(*(str + i) != *(s2.str + i)){
			return *(str+i) > *(s2.str+i);
		}
		i++;
	}
	return *(str+i) > *(s2.str+i);	
}
bool String :: operator <(String s2){
	int i = 0;
	while(*(str+i) && *(s2.str+i)){
		if(*(str + i) != *(s2.str + i)){
			return *(str+i) < *(s2.str+i);
		}
		i++;
	}
	return *(str+i) < *(s2.str+i);	

}
bool String :: operator >=(String s2){
	int i = 0;
	while(*(str+i) && *(s2.str+i)){
		if(*(str + i) != *(s2.str + i)){
			return *(str+i) >= *(s2.str+i);
		}
		i++;
	}
	return *(str+i) >= *(s2.str+i);	

}
bool String :: operator <=(String s2){
	int i = 0;
	while(*(str+i) && *(s2.str+i)){
		if(*(str + i) != *(s2.str + i)){
			return *(str+i) <= *(s2.str+i);
		}
		i++;
	}
	return *(str+i) <= *(s2.str+i);	

}
bool String :: operator !=(String s2){
	int i = 0;
	while(*(str+i) && *(s2.str+i)){
		if(*(str + i) != *(s2.str + i)){
			return *(str+i) != *(s2.str+i);
		}
		i++;
	}
	return *(str+i) != *(s2.str+i);	

}
bool String :: operator ==(String s2){
	int i = 0;
	while(*(str+i) && *(s2.str+i)){
		if(*(str + i) != *(s2.str + i)){
			return *(str+i) == *(s2.str+i);
		}
		i++;
	}
	return *(str+i) == *(s2.str+i);	
	
	/*int i = 0;
	while(*(str+i)){
		if(*(str+i) != *(s2.str +i)){ // s2.str; might unauthorize memory access after '\0'
			return 0;
		}
		i++;
	}
	if(*(str+i) == '\0' && *(s2.str + i) == '\0')
		return 1;
	return 0;*/
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
unsigned int my_strlen(String& obj){
	int i;
	while(*(obj.str+i++));
	return i;	
}
void my_strcpy(String& s1, String& s2){
	int i = 0;
	while(*(s1.str+i)){
		*(s2.str+i) = *(s1.str+i);
		i++;
	}
	*(s1.str+i) = '/0';

}
void my_strncpy(String& dest, const String& src, unsigned const int len){
	int i = 0;
	// fix buffer issue
	while(i<len && *(src.str+i)){
		*(dest.str + i) = *(src.str + i);
		i++;
	}	
}
int my_strcmp(const String& s1, const string& s2){
	int i=0;
	while(*(s1.str + i){
		if(*(s1.str + i) != *(s2.str+i){
			return *(s1.str+i) - *(s2.str+i);
		}
		i++;
	}
	return *(s1.str+i) - *(s2.str+i);
}
char* my_strcat(String& s1, const String& s2){
	int i=0, j=0;

	// fix buffer issue

	while(*(s1.str + i)){
		i++;
	}
	
	while(*(s2.str+j)){
		*(s1.str+i) = *(s2.str+j);
		i++;
		j++;
	}
	*(s1.str+i) = '\0';
}
char* my_strncat(String& s1, const String& s2, unsigned const int len){
	int i=0, j=0;

	// fix buffer issue
	while(*(s1.str + i)){
		i++;
	}
	
	while(*(s2.str+j) && j<len){
		*(s1.str+i) = *(s2.str+j);
		i++;
		j++;
	}
	*(s1.str+i) = '\0';
}
String& my_strrev1(String& obj){
	int len, i, j;
	char temp;
	j = mystrlen(obj.str)-1;
	
	for(i = 0; i<j; i++ j--){
		temp = *(str+i);
		*(str+i) = *(str+j);
		*(str+j) = temp;
	}
	return obj;
}
void strrev2(char* startAddr, char* endAddr){ // use own iterator concept; obj.begin(), obj.end()
        
    char temp;
    while(startAddr<endAddr){
        temp = *startAddr;
        *startAddr = *endAddr;
        *endAddr = temp;
        
        startAddr++;
        endAddr--;
    }
}

String& my_strupper(String& obj){
	int i;
	while(*(obj.str+i)){
		if(*(obj.str+i) >='a' && *(obj.str+i) <= 'z'){
			*(obj.str+i) ^= 32;

		}
		i++;
	}
	return obj;
}
String& my_strlower(String& obj){
	int i;
	while(*(obj.str+i)){
		if(*(obj.str+i) >='A' && *(obj.str+i) <= 'Z'){
			*(obj.str+i) ^= 32;
		}
		i++;
	}
	return obj;
}
bool my_strchr(String& obj, char ch){
	int i=0;
	while(*(obj.str + i)){
		if(*(obj.str+i) == ch){
			return 1;
		}
		i++;
	}
	return 0;
}
bool my_strrchr(String& obj, char ch){
	int len = mystrlen(obj.str)-1;
	while(len){
		if(*(obj.str+len) == ch){
			return 1;
		}
		len--;
	}
	return 0;
}
bool my_strstr(const String& mainstr, const String& substr){
        int i = 0, j = 0;
        while(*(mainstr.str+i)){
                if(*(mainstr.str+i) == substr.str[0]){

                        while(*(substr.str+j)){

                                if(*(mainstr.str+i)!=*(substr.str+j))
                                {
                                        j=0;
                                        break;
                                }
                                i++;
                                j++;
                        }
                        if(*(substr.str+j) == '\0'){
                                return 1;
                        }
                }
                i++;
        }
        return 0;
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



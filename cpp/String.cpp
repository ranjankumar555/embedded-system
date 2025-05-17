#include<iostream>
#include<cstdio>
#include<fstream>
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
 	/*** Constructor ***/
	String();		// default
	String(const char* p);	// parameterised
	String(String&& other); // move 
	String(String& t);	// deep copy
	~String(){
		if(str!=nullptr){
		delete[] str;
		cout<<"memory deallocated"<<endl;
		}
	}	
	/*** member function ***/
	void getstr(void);
	int len(void);
 	char* begin(void);
	char* end(void);	

	/*** operator overloaded member function ***/
	String& operator=(String& s2);
	String& operator=(const char* ptr);
	String& operator=(String&& other);  // Move assignment
	
	String operator +(String&);
	String& operator +=(String&);
	String operator+(const char* ); // def s1 + "abc"
	String& operator +=(const char*);
	String operator+(const char );  // def s1 + 'a'
	String& operator +=(const char ch);
	
	char& operator [](int i);
	bool operator >(String s2);
	bool operator <(String s2);
	bool operator >=(String s2);
	bool operator <=(String s2);
	bool operator !=(String s2);
	bool operator ==(String s2);

	friend ostream& operator <<(ostream& out, String& obj);
	friend istream& operator >>(istream& in, String& obj);
	
	friend String operator+(const char* ptr, String& obj);
	friend String operator+(const char ch, String& obj);

	/*** friend function ***/
	friend unsigned int my_strlen(String& s);
	friend void my_strcpy(String& s1, String& s2);
	friend void my_strncpy(String& dest, const String& src, unsigned const int len);
	friend int my_strcmp(const String& s1, const String& s2);
	friend void my_strcat(String& s1, const String& s2);
	friend void my_strncat(String& s1, const String& s2, unsigned const int len);
	friend String& my_strrev1(String& str);
	friend void my_strrev2(String& startAddr, String& endAddr);
	friend String& my_strupper(String& str);
	friend String& my_strlower(String& str);
	friend bool my_strchr(String& str, char ch);
	friend bool my_strrchr(String& str, char ch);
	friend bool my_strstr(const String& mainstr, const String& substr);
};

/*** default constructor; string s1; ***/
String :: String():str(nullptr), length(0){}

/*** parameterised constructor; string s2("Ranjan") ***/
String :: String(const char* p){
	length = mystrlen(p);
	str = new char[length+1];
	mystrcpy(str, p, length);
}
String::String(String&& other) {
    // Transfer ownership of resources
    str = other.str;
    length = other.length;

    // Null out the source
    other.str = nullptr;
    other.length = 0;
}
/*** deep copy constructor; s2 = s1; ***/
String :: String(String& t){
	length = t.length;
	//length = mystrlen(t.str);
	str = new char[length + 1];
	mystrcpy(str, t.str, length);
}

/*** member function ***/
void String :: getstr(){
	if(str==nullptr) return;
	cout<<str<<endl;
}
int String::len(){
	return length;
}
char* String :: begin(void){
	return str;
}

char* String :: end(void){
	//length = strlen(str);
	return str+length-1;
}

/*** operator overloaded member function ***/
String& String :: operator =(String& s1){    // s2 = s1;
	length = s1.length;
	delete str;
	str = new char[length+1];
	
	mystrcpy(str, s1.str, length);
	return *this;
}
String& String :: operator = (const char* ptr){
	length = mystrlen(ptr);
	delete str;
	str = new char[length+1];
	mystrcpy(str, ptr, length);
	
	return *this;
}
String& String::operator=(String&& other) {
    if (this != &other) {
        delete[] str;         // Free existing memory
        str = other.str;      // Steal the resource
        length = other.length;

        other.str = nullptr;  // Nullify source
        other.length = 0;
    }
    return *this;
}
String String :: operator +(String& s1){ // +ope principal: doesn't modify its operands
	String result;
	result.length = length + s1.length;
	result.str = new char[result.length +1];
	mystrcpy(result.str, str, result.length);

	for(int i=0; s1.str[i]; i++){
		result.str[length + i] = s1.str[i]; // overwrite '\0' with first character of s2.str
	}
	result.str[result.length] = '\0';
	return move(result);  // call move constructor rather than copy

}
String& String :: operator +=(String& s1){
        int i, j = length;
        length = length + s1.length;
        char* temp = new char[length + 1]; // str ko abhi free nhi kr skte
        mystrcpy(temp, str, length);
        for(i=0; s1.str[i]; i++){
                temp[j++] = s1.str[i]; // overwrite '\0' with first character of s1.str
        }
	temp[j] = '\0';
        delete str;     // free resource pointed by str as content already copied to temp;
        str = temp;     // str point the resource pointed by temp;
        temp = nullptr; // avoid temp to become dangling pointer
        return *this;   // safely return the object reference

}

String String::operator+(const char* ptr){

	String temp;
	temp.length = length + mystrlen(ptr);
	temp.str = new char[length + 1];

	int i=0, j= 0;
	while(str[i]){
		temp.str[i] = str[i];
		i++;
	}
	while(ptr[j]){
		temp.str[i++] = ptr[j++];
	}
	temp.str[i]= '\0';

	return move(temp);
}
String& String :: operator+=(const char* ptr){

	String temp;
	temp.length = length + mystrlen(ptr);
	temp.str = new char[temp.length + 1];

	int i=0, j= 0;
	while(str[i]){
		temp.str[i] = str[i];
		i++;
	}
	while(ptr[j]){
		temp.str[i++] = ptr[j++];
	}
	temp.str[i]= '\0';
	delete[] str;

	str = temp.str;
	length = temp.length;
	
	temp.str = 0;
	temp.length = 0;
	return *this;
}
String String::operator+(const char ch){
	String temp;
	temp.length = length + 1;
	temp.str = new char[temp.length + 1];
	int i = 0;
	while(str[i]){
		temp.str[i] = str[i];
		i++;
	}
	temp.str[i++] = ch;
	temp.str[i] = '\0';

	return temp;

}
String& String::operator+=(const char ch){
   String temp;
   temp.length = length + 1;
   temp.str = new char[temp.length + 1];
   int i = 0;
   while(str[i]){
       temp.str[i] = str[i];
       i++;
   }
   temp.str[i++] = ch;
   temp.str[i] = '\0';
   delete[] str;
   str = temp.str;
   length = temp.length;
   temp.str = 0;
   temp.length = 0;
   return *this;
}
char& String :: operator [](int index){
	if(str==nullptr){
		str = new char[10];
		return str[index];
	}
	if (index < 0 || index > length) 
		throw out_of_range("Index out of range");
	return str[index];
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
bool String :: operator != (String s2){
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
	
}

/*** overloaded operator friend function ***/
ostream& operator <<(ostream& out, String& obj){
	out<<obj.str;
	return out;
}
istream& operator >>(istream& in, String& obj){
	if(obj.str == nullptr){ // String s4; cin>>s4; cout<<s4<<endl;

		fstream fin("input.txt", ios::in | ios::out | ios::trunc);
		if(!fin.is_open()) {
			cerr << "Error opening file\n";
			exit(1);
		}

		char ch;
		int count = 0, i =0;

		// Read characters from user and store to file
		while(1)
		{
			cin.get(ch);
			fin.put(ch);
			if (ch == '\n') break;
			count++;
		}

		obj.str = new char[count+1];
		obj.length = count;
		
		// Rewind file to beginning
		fin.seekg(0, ios::beg);
		while(1){
			fin.get(ch);
			if(ch == '\n'){
				obj.str[i] = '\0';
				break;
			}
			obj.str[i++] = ch;
		}
		fin.close();
		remove("input.txt"); // delete file to unnecessary fill hardisk
		return in;
	}
	in>>obj.str;
	return in;
}

String operator+(const char* ptr, String& obj){
	String temp;
	temp.length = obj.length + mystrlen(ptr);
	temp.str = new char[obj.length + 1];

	int i=0, j= 0;

	while(ptr[i]){
		temp.str[i] = ptr[i];
		i++;
	}
	while(obj.str[j]){
		temp.str[i++] = obj.str[j++];
	}
	temp.str[i]= '\0';

	return temp;    
}

String operator+(const char ch, String& obj){
	String temp;
	temp.length = obj.length + 1;
	temp.str = new char[temp.length + 1];
	int i = 0, j=0;
	temp.str[i++] = ch;
	while(obj.str[j]){
		temp.str[i++] = obj.str[j++];
	}

	temp.str[i] = '\0';

	return temp;    
}
/*** friend function ***/
unsigned int my_strlen(String& obj){
	int i;
	while(*(obj.str+i++));
	return i;	
}
void my_strcpy(String& dest, String& src){
	int i = 0;
	if(dest.length >= src.length){ 
		while(*(src.str+i)){
			*(dest.str+i) = *(src.str+i);
			i++;
		}
		*(dest.str+i) = '\0';
	}
	else{
		delete[] dest.str;
		dest.str = new char[src.length + 1];
		dest.length = src.length;
		mystrcpy(dest.str, src.str, dest.length);
	}

}
void my_strncpy(String& dest, const String& src, unsigned const int len){
	int i = 0;
	if(dest.length >= len){
		while(i<len && *(src.str+i)){
			*(dest.str + i) = *(src.str + i);
			i++;
		}	
	}
	else{
		delete dest.str;
		dest.str = new char[src.length + 1];
		dest.length = src.length;

		while(i<len && *(src.str+i)){
			*(dest.str + i) = *(src.str + i);
			i++;
		}

	}
}
int my_strcmp(const String& s1, const String& s2){
	int i=0;
	while(*(s1.str + i)){
		if(*(s1.str + i) != *(s2.str+i)){
			return *(s1.str+i) - *(s2.str+i);
		}
		i++;
	}
	return *(s1.str+i) - *(s2.str+i);
}
void my_strcat(String& s1, const String& s2){
	int i=0, j=0;

	s1.length += s2.length;
	char *temp = new char[s1.length + 1];
	while(*(s1.str + i)){
		*(temp + i) = *(s1.str + i);
		i++;
	}
	
	while(*(s2.str+j)){
		*(temp+i) = *(s2.str+j);
		i++;
		j++;
	}
	*(temp+i) = '\0';
	delete[] s1.str;
	s1.str = temp;
	s1.length = i;
	temp = nullptr;
}
void my_strncat(String& s1, const String& s2, unsigned int len) {
	unsigned int copyLen = (len < s2.length) ? len : s2.length;

	int newLength = s1.length + copyLen;
	char* temp = new char[newLength + 1];

	int i = 0;
	for (; s1.str[i]; i++) {
		temp[i] = s1.str[i];
	}

	int j = 0;
	while (j < copyLen && s2.str[j]) {
		temp[i++] = s2.str[j++];
	}

	temp[i] = '\0';

	delete[] s1.str;

	s1.str = temp;
	s1.length = newLength;
}

String& my_strrev1(String& obj){
	int len, i, j;
	char temp;
	j = obj.length-1;
	
	for(i = 0; i<j; i++, j--){
		temp = *(obj.str+i);
		*(obj.str+i) = *(obj.str+j);
		*(obj.str+j) = temp;
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
int main() {

	String s1("vector india");
	s1[0] = 's';

	cout << "s1 = ";
	s1.getstr();
	cout<<"-------------------------------------------"<<endl;
	String s2 = "bangalore";
	cout<<"s2  = ";
	s2.getstr();
	cout << "Length of s2 = " << s2.len() << endl;

	cout<<"-------------------------------------------"<<endl;
	String s3;

	// Concatenation: Case 1
	cout
	s3 = s1 + s2;
	cout << "s3 = ";
	s3.getstr();

	// Case 2
	cout<<"-------------------------------------------"<<endl;
	s3 += s1;
	cout << "After s3 += s1, s3 = " << s3 << endl;

	// Case 3
	cout<<"-------------------------------------------"<<endl;
	s3 = s1 + "vector";
	cout << "s1 = " << s1 << endl;

	// Case 4:
	cout<<"-------------------------------------------"<<endl;
	s3 = "vector" + s1;
	cout << "s3 = vector + s1 = " << s3 << endl;

	// Case 5
	cout<<"-------------------------------------------"<<endl;
	cout << "s3 += \"Vector\" " << endl;
	s3 += "Vector";
	cout << "s3 = " << s3 << endl;

	// Case 6
	cout<<"-------------------------------------------"<<endl;
	s3 = s1 + 'x';
	cout << "s1 + 'x' = " << s3 << endl;

	// Case 7
	cout<<"-------------------------------------------"<<endl;
	s3 = 'x' + s1;
	cout << "'x' + s1 = " << s3 << endl;

	// Case 8
	cout<<"-------------------------------------------"<<endl;
	s3 += 'x';
	cout << "s3 += 'x' = " << s3 << endl;
	cout << "Length of s3 = " << s3.len() << endl;

	// [] and << overload
	cout<<"-------------------------------------------"<<endl;
	cout << "Characters of s3: ";
	for (int i = 0; i < s3.len(); i++) {
		cout << s3[i] << " ";
	}
	cout << endl;
	
	// >> overload and chaining support
	cout<<"-------------------------------------------"<<endl;
	String s4, s5;
	cout << "Enter two strings (s4 and s5): ";
	cin >> s4 >> s5;

	cout << "S4: " << s4 << endl;
	cout << "Length of s4 = " << s4.len() << endl;

	cout<<"-------------------------------------------"<<endl;
	cout << "s5 = ";
	s5.getstr();
	cout << "Length of s5 = " << s5.len() << endl;

	cout<<"-------------------------------------------"<<endl;
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



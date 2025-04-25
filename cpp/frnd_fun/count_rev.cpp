#include<iostream>
#include<cstring>
using namespace std;
class str{
	private:
		char *s = nullptr;
	public:
		str(){
			s = new char[50];
			if(s!=nullptr){
				cout<<"memory allocated"<<endl;
			}
		}
		~str(){
			delete []s;
			cout<<"memory deallocated"<<endl;
		}
		void set_data();
		void get_data();
		int count_word();
		friend void rev_str(str&);
};
void str::set_data(){
	cout<<"Enter string: ";
	cin.getline(s, 49);
}
void str::get_data(){
	cout<<"String = "<<s<<endl;
}
int str::count_word(){
	char * p = s;
	int cnt,flag;
	cnt = flag = 0;
	while(*p){
		if(*p == ' ' && flag){
			cnt++;
			flag = 1;
		}
		if(*p != ' '){
			flag = 1;
		}
		p++;
	}
	return cnt+1;
}
void rev(char *p, char*q){
	char temp;
	while(p<q){
		temp = *p;
		*p = *q;
		*q = temp;
		p++;
		q--;
	}
}
void rev_str(str& t){
	int len = strlen(t.s);
	char *p = t.s;
	char *q = t.s + len -1;
	rev(t.s, q);
	q = t.s;
	while(*p){
		if(*p == ' '){
			rev(q,p-1);
			q = p+1;
		}
		p++;
	}
	//if(*p = '\0'){
		rev(q, p-1);
	//}
}
int main(){
	int res;
	str obj;
	obj.set_data();
	obj.get_data();
	res = obj.count_word();
	cout<<"word count: "<<res<<endl;

	rev_str(obj);
	obj.get_data();
	return 0;
}


#include<iostream>
using namespace std;
class str{
	char *s = nullptr;
	public:
	str(){
		s = new char[50];
		if(s!=nullptr){
			cout<<"memory allocated"<<endl;
		}	
	}
	void set_data(){
		cout<<"enter string: ";
		cin>>s;
	}
	void get_data(){
		cout<<"string = "<<s<<endl;
	}
	~str(){
		cout<<"memory deallocated"<<endl;
		delete[] s;
	}
	friend void strrev(str&);
	friend void delete_duplicate(str&);
};

void strrev(str& t){
	char temp, len, *p, *q;
	p = t.s;
	for(len = 0; t.s[len]; len++);
	q = t.s+len-1;
	while(p<q){
		temp = *p;
		*p = *q;
		*q = temp;
		
		p++;
		q--;
	}
}

void delete_duplicate(str& t){
	char *temp;
	int i = 0;
	char visit[255] = {0};
	temp = t.s;

	while(*temp){
		if(!visit[*temp]){
			t.s[i++] = *temp;
			visit[*temp] = 1;
		}
		temp++;
	}
	t.s[i] = '\0';
}

int main(){
	str obj;
	obj.set_data();
	obj.get_data();
	//obj.strrev();
	delete_duplicate(obj);
	obj.get_data();
	return 0;
}

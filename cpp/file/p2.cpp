#include<iostream>
#include<fstream>
using namespace std;
void rev(string&);
int main(){
	fstream fio("data", ios::in|ios::out);
	if(fio.fail()){
		cout<<"file not present"<<endl;
		return 1;
	}
	
	char ch;
	int i = 0;
	string s;
	while((ch=fio.get())!=-1){
		s += ch;
	}
	cout<<s;
	rev(s);
	cout<<"after: "<<endl;
	cout<<s<<endl;
	
	fio.clear();
	fio.seekp(0, ios::beg);
	fio<<s;
	cout<<endl;
	fio.close();
	return 0;
}
void rev(string& str){
	int i=0, t;
	int j = str.size()-1;
	while(i<j){
		t = str[i];
		str[i] = str[j];
		str[j] = t;

		i++;
		j--;
	}
}


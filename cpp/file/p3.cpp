#include<iostream>
#include<fstream>
#include<algorithm>
using namespace std;
void rev(string& str);
void rword(string& str);

int main(){

	fstream fio("data", ios::in | ios::out);
	if(fio.fail()){
		cout<<"file not present"<<endl;
		return 1;
	}

	string s;
	while(getline(fio,s)){
		cout<<s<<endl;
		rword(s);
		fio.seekg(-s.size(), ios::beg);
		fio<<s<<endl;	
		cout<<s<<endl;
	}
	
	cout<<endl;
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

void rword(string& str){	
	int i = 0, j = 0;
	for(i = 0; str[i]; i++){
		if(str[i] == ' '){
			reverse(str.begin()+j, str.begin()+i);
			j = i+1;
		}
	}
	reverse(str.begin()+j, str.begin()+i);	
}


#include<iostream>
#include<fstream>
using namespace std;

int main(int argc, char** argv){
	if(argc<3){
		cout<<"USAGE: ./a.out src dest..."<<endl;
		return 0;
	}
	ifstream fin(argv[1]);
	if(!fin){
		cout<<"src file not present"<<endl;
		exit(1);
	}
	ofstream fout;
	string s;
	for(int i = 2; i<argc; i++){
		fout.open(argv[i]);
		if(fout.fail()){
			cout<<"File not present\n";
			exit(1);
		}
		/*
		 while(getline(fin,s)) {  // line by line
			fout<<s<<endl;
		}*/
/*
		while(fin>>s){  // word by word; inefficient b/c extra burden to put newline
			fout<<s<<" ";
		}
				
*/		
		char ch;  // char by char
		while((ch = fin.get()) != EOF){
			fout<<ch;
		}
		fin.clear();
		fin.seekg(0, ios::beg);
		fout.close();
	}
	fin.close();

	return 0;
	}




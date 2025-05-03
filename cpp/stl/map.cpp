#include<map>
#include<iostream>
using namespace std;
int main(){
        map<char, string> mp{{'A', "Apple"}, {'B', "boy"}, {'C', "cat"}};

        for(auto p: mp){
                cout<<p.first << " for "<<p.second<<endl;
        }
        cout<<endl;
}

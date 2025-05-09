#include<iostream>
using namespace std;
#define n 6
class student{
	int roll;
	string name;
	float marks;

	public:
	void setdata(){
		cin>>roll>>name>>marks;
	}
	void display(){
		cout<<roll<<"\t"<<name<<"\t"<<marks<<endl;
	}
	void sortbyname(student (&arr)[n]);
	void sortbyroll(student**);
	void sortbymarks(student*);
};
void student::sortbyname(student (&arr)[n]){
	int i,j;
	student temp;
	for(i = 0; i<n-1; i++){
		for(j = 0; j<n-i-1; j++){
			if(arr[j].name > arr[j+1].name){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

}
void student::sortbyroll(student** arr){
	int i,j;
	student temp;
	for(i = 0; i<n-1; i++){
		for(j = 0; j<n-i-1; j++){
			if((arr[j])->roll > (arr[j+1])->roll){
				temp = *(arr[j]);
				*(arr[j]) = *(arr[j+1]);
				*(arr[j+1]) = temp;
			}
		}
	}

}
void student::sortbymarks(student* arr){
	int i,j;
	student temp;
	for(i = 0; i<n-1; i++){
		for(j = 0; j<n-i-1; j++){
			if(arr[j]->marks > arr[j+1]->marks){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

}
int main(){

	student st[n];
	cout<<"enter roll name and marks"<<endl;
	for(int i = 0; i<n; i++){
		st[i].setdata();
	}
	cout<<endl;
	cout<<"Data Sorted by Name"<<endl;
	cout<<"--------------------------------------------------"<<endl;
	st[0].sortbyname(st);

	for(int i = 0; i<n; i++){
		st[i].display();
	}

	cout<<endl;
	cout<<"Data Sorted by Rollno"<<endl;
	cout<<"--------------------------------------------------"<<endl;
	st[0].sortbyroll(&st);

	for(int i = 0; i<n; i++){
		st[i].display();
	}
	
	cout<<endl;
	cout<<"Data Sorted by Marks"<<endl;
	cout<<"--------------------------------------------------"<<endl;
	
	st[0].sortbymarks(st);

	for(int i = 0; i<n; i++){
		st[i].display();
	}

	return 0;
}



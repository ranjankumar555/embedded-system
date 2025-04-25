#include<iostream>
using namespace std;
class stu{
	private:
		int roll;
		char name[30];
		float marks;
	public:

		void set_data();
		void get_data();
		void sort_data(stu[], int);
};
void stu::set_data(){
	cin>>roll>>name>>marks;
}
void stu::get_data(){
	cout<<roll<<"\t"<<name<<"\t"<<marks<<endl;
}
void stu::sort_data(stu arr[], int n){
	int i,j;
	stu temp;
	// sort by name
	for(i = 0; i<n-1; i++){
		for(j = 0; j<n-i-1; j++){
			if(arr[j].roll > arr[j+1].roll){
				temp = arr[j];
			       arr[j] = arr[j+1];
			       arr[j+1] = temp; 
			}
		}
	}
}
int main(){
	stu obj[5];

	cout<<"enter roll name and marks"<<endl;
	for(int i = 0; i<5; i++){
		obj[i].set_data();
	}

	cout<<"--------------------------------------"<<endl;	
	cout<<"Roll\tname\tmarks"<<endl;
	for(int i = 0; i<5; i++){
		obj[i].get_data();
	}
	cout<<"--------------------------------------"<<endl;
	
	obj[0].sort_data(obj, 5);
	cout<<"Sorted by Name"<<endl;
	cout<<"--------------------------------------"<<endl;
        cout<<"Roll\tname\tmarks"<<endl;
        for(int i = 0; i<5; i++){
                obj[i].get_data();
        }
        cout<<"--------------------------------------"<<endl;

	return 0;	

}

#include<iostream>
using namespace std;
int main(){
	int r1,r2, c1, c2, i, j,k;
	int **a, **b, **c;

	cout<<"enter row and cols for 1st matrix: "<<endl;
	cin>>r1>>c1;	
	a = new int*[r1];
	for(i = 0; i<r1; i++){
		a[i] = new int[c1];
	}
	
	cout<<"enter row and cols for 2nd matrix: "<<endl;
	cin>>r2>>c2;
	b = new int*[r2];
	for(i = 0; i<r2; i++){
		b[i] = new int[c2];
	}
	
	c = new int*[r1];
	for(i = 0; i<r1; i++){
		c[i] = new int[c2];
	}
	
	// scan
	cout<<"enter data for 1st matrix"<<endl;
	for(i = 0; i<r1; i++){
		for(j = 0; j<c1; j++){
			cin>>a[i][j];
		}
	}

	cout<<"enter data for 2nd matrix"<<endl;
	for(i = 0; i<r2; i++){
		for(j = 0; j<c2; j++){
			cin>>b[i][j];
		}
	}

	// print 
	cout<<"matrix 1:"<<endl;
	for(i = 0; i<r1; i++){
		for(j = 0; j<c1; j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<"matrix 2:"<<endl;
	for(i = 0; i<r2; i++){
		for(j = 0; j<c2; j++){
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
	
	if(c1 == r2){
		cout<<"matrix multiplication is possible"<<endl;
		for(i = 0; i<r1; i++){
			for(j = 0; j<c2; j++){
				for(k = 0; k<c2; k++){
					c[i][j] += a[i][k] * b[k][j];
				}
			}
		}
		cout<<endl;
		cout<<"Resultant matrix:"<<endl;
		for(i = 0; i<r1; i++){
			for(j = 0; j<c2; j++){
				cout<<c[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	
	else{
		cout<<"matrix multiplication is not possible"<<endl;
	}

	return 0;
}

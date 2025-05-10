#include<iostream>
using namespace std;
class Complex{
	float img;
	float real;
	public:
	Complex():img(0), real(0){}
	Complex(float r, float i): img(i), real(r){}
	Complex sum(Complex);
       	Complex sub(Complex);
	void disp(){
		if(img>=0)
		cout<<real<<" + "<<img<<"j"<<endl;
		else
		cout<<real<<" "<<img<<"j"<<endl;
	}
};
Complex Complex::sum(Complex t){
	Complex temp;
	temp.real = real + t.real;
	temp.img = img + t.img;

	return Complex(temp.real, temp.img);
}

Complex Complex::sub(Complex t){
	Complex temp;
	temp.real = real - t.real;
	temp.img = img - t.img;

	return (temp);
}
int main(){
	Complex c1,c2,c3;
	c1 = Complex(8.2,4.2);
	c2 = Complex(6,5.3);
	c3 = c1.sum(c2);
	c3.disp();

	c3 = c1.sub(c2);
	c3.disp();

	return 0;
}


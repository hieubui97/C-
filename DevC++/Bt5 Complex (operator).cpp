#include<iostream>
#include<math.h>
using namespace std;

class Complex{
	private:
		double real,imag;
	public:
		Complex(){
			real=0;	imag=0;
		}
		Complex(double real=0,double imag=0){
			this->imag=imag;
			this->real=real;
		}
		void display();
		//cong hai so phuc
		Complex add(Complex&);
		//khai bao nap trong toan tu cong
		//Complex operator+(Complex&c2);
		friend Complex operator+(Complex&c1,Complex&c2);
		friend Complex operator-(Complex&c1,Complex&c2);
		friend Complex operator*(Complex&c1,Complex&c2);
		friend Complex operator/(Complex&c1,Complex&c2);
		friend ostream& operator<<(ostream&output,Complex &c){
			output<<c.real<<"+ i*"<<c.imag<<endl;
			return output;
		}
		friend istream& operator>>(istream&input,Complex &c){
			input>>c.real>>c.imag;
			return input;
		}
};
Complex Complex::add(Complex&c2){
	Complex c(0,0);
	c.real=real+c2.real;
	c.imag=imag+c2.imag;
	return c;
}
//Complex Complex::operator+(Complex&c2){
//	return Complex(real+c2.real,imag+c2.imag);
//}
Complex operator+(Complex &c1,Complex &c2){
	return Complex(c1.real+c2.real,c1.imag+c2.imag);
}
Complex operator-(Complex&c1,Complex&c2){
	return Complex(c1.real-c2.real,c1.imag-c2.imag);
}
Complex operator*(Complex&c1,Complex&c2){
	return Complex(c1.real*c2.real-c1.imag*c2.imag,c1.real*c2.imag+c1.imag*c2.real);
}
Complex operator/(Complex&c1,Complex&c2){
	return Complex((c1.real*c2.real+c1.imag*c2.imag)/(pow(c2.imag,2)+pow(c2.real,2)),(c1.imag*c2.real-c1.real*c2.imag)/(pow(c2.imag,2)+pow(c2.real,2)));
}

void Complex::display(){
	cout<<real<<"+ i*"<<imag<<endl;
}

int main(){
	Complex c1(2,3);
	c1.display();
	Complex c2(4,5);
	c2.display();
	Complex c(0,0);
	// ham add
	cout<<"ham add"<<endl;
	c=c1.add(c2);
	c.display();
	//friend operator
	cout<<"operator+"<<endl;
	c=c1+c2;
	c.display();
	cout<<"operator-"<<endl;
	c=c1-c2;
	cout<<c;
	cout<<"operator*"<<endl;
	c=c1*c2;
	cout<<c;
	cout<<"operator/"<<endl;
	c=c1/c2;
	cout<<c;

}

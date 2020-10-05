#include<iostream>
using namespace std;

class A{
	private:
		int a;
	public:
		A(int a){
			this->a=a;
		}
		void in(){
			cout<<"a: "<<a<<endl;
		}	
};

class B{
	private:
		int b;
	public:
		B(int b){
			this->b=b;
		}
		void in(){
			cout<<"b: "<<b<<endl;
		}
};

class C:public A,public B{
	private:
		int c;
	public:
		C(int a,int b,int c):A(a),B(b){
			this->c=c;
		}	
		void in(){
			A::in();B::in();
			cout<<"c: "<<c<<endl;
		}
};

int main(){
	C c(1,2,3);
	c.in();
}

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

class B:public A{
	private:
		int b;
	public:
		B(int a,int b):A(a){
			this->b=b;
		}
		void in(){
			A::in();
			cout<<"b: "<<b<<endl;
		}
};

int main(){
	B b(1,2);
	b.in();
}

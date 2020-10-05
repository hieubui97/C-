#include<iostream>
using namespace std;
class a{
	public:
		a(){
			cout<<"constructing a"<<endl;
		}
		~a(){
			cout<<"destructing a"<<endl;
		}
};

class b:public a{
	public:
		b(){
			cout<<"constructing b"<<endl;
		}
		~b(){
			cout<<"destructing b"<<endl;
		}
};

class c:public b{
	public:
		c(){
			cout<<"constructing c"<<endl;
		}
		~c(){
			cout<<"destructing c"<<endl;
		}
};
int main(){
	c c1;
}

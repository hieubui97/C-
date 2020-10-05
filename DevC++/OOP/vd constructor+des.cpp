#include<iostream>
using namespace std;

class phanso{
	private:
		float t;
		float m;
	public:
		phanso(){
			this->t=0;
			this->m=1;
		}	
		phanso(float t,float m){
			this->t=t;
			this->m=m;
		}
		void in(){
			cout<<t<<"/"<<m<<endl;
		}
		~phanso(){
			cout<<"destructing"<<endl;
		}
};

int main(){
	phanso ps1;
	ps1.in();
	phanso ps2(4,5);
	ps2.in();
}

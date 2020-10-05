#include<iostream>
using namespace std;
//dinh nghia cac ham trung ten nhung khac tham so truyen vao
//khi thuc hien ctr se trieu goi ham phu hop nhat
class A{
	
	public:
		void in(int x){
			cout<<"in so nguyen: "<<x<<endl;
		}	
		void in(double y){
			cout<<"in so thuc: "<<y<<endl;
		}
};
int main(){
	A a;
	a.in(5);
	a.in(9.5);
}

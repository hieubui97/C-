#include<iostream>
using namespace std;
//ham ban khong phai ham thanh vien cua lop
//co the truy cap den cac thuoc tinh private va protected cua lop ban
//mot ham co the la ban cua nhieu lop
//lop ban: tat ca ham thanh vien cua lop B co the truy cap den tat ca cac thanh vien cua lop A
class conmeo;
class concho{
	private:
		float khoiluong;
	public:
		concho(float a){
			khoiluong=a;
		}
		friend void lamthit(concho,conmeo);	
};
class conmeo{
	private:
		float khoiluong;
	public:
		conmeo(float a){
			khoiluong=a;
		}
		friend void lamthit(concho,conmeo);
};
void lamthit(concho cho,conmeo meo){
	if(cho.khoiluong>meo.khoiluong) cout<<"lam thit con cho"<<endl;
	else cout<<"lam thit con meo"<<endl;
}

int main(){
	concho cho(9);
	conmeo meo(8);
	lamthit(cho,meo);
}

#include<iostream>
using namespace std;
//static: 
//chi 1 dchi o nho duoc truy cap
//dung nhu bien toan cuc cua class,ton tai suot chuong trinh 
//phai khai bao ngoai lop
//ham static k the truy cap bien khong phai static
//co the goi qua ten lop khi khong co doi tuong nao ton tai
class phanso{
	private:
		int t;
		int m;
		static int dem;		//sd dem xem co bao nhieu phan so dc khai bao
	public:
		phanso(int t,int m){
			this->t=t;
			this->m=m;
			dem++;
		}
		static void indem(){
			cout<<"co "<<dem<<" phan so\n"<<endl;
		}	
};
int phanso::dem;

int main(){
	phanso ps1(1,2);
	phanso ps2(3,5);
	phanso ps3(4,9);
	ps1.indem();
}

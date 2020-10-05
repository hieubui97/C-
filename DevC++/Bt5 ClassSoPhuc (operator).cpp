#include<iostream>
#include<math.h>
using namespace std;
class SoPhuc{
	private: 
		double pt,pa;
	public:
		void nhap();
		void xuat();
		friend SoPhuc operator+(SoPhuc &a,SoPhuc&b);
		friend SoPhuc operator-(SoPhuc &a,SoPhuc&b);
		friend SoPhuc operator*(SoPhuc &a,SoPhuc&b);
		friend SoPhuc operator/(SoPhuc &a,SoPhuc&b);
		friend ostream& operator<<(ostream&output,SoPhuc &sp){
			output<<sp.pt<<"+"<<sp.pa<<"*i"<<endl;
			return output;
		}
		friend istream& operator>>(istream&input,SoPhuc &sp){
			input>>sp.pt>>sp.pa;
			return input;
		}
};
void SoPhuc::nhap(){
	cout<<"phan thuc: ";cin>>pt;
	cout<<"phan ao: ";cin>>pa;
}
void SoPhuc::xuat(){
	cout<<pt<<"+"<<pa<<"i";
}
SoPhuc operator+(SoPhuc &a,SoPhuc &b){
	SoPhuc c;
	c.pt=a.pt+b.pt;
	c.pa=a.pa+b.pa;
	return c;
}
SoPhuc operator-(SoPhuc&a,SoPhuc&b){
	SoPhuc c;
	c.pt=a.pt-b.pt;
	c.pa=a.pa-b.pa;
	return c;
}
SoPhuc operator*(SoPhuc&a,SoPhuc&b){
	SoPhuc c;
	c.pt=a.pt*b.pt-a.pa*b.pa;
	c.pa=a.pt*b.pa+a.pa*b.pt;
	return c;
}
SoPhuc operator/(SoPhuc&a,SoPhuc&b){
	SoPhuc c;
	c.pt=(a.pt*b.pt+a.pa*b.pa)/(pow(b.pt,2)+pow(b.pa,2));
	c.pa=(a.pa*b.pt-a.pt*b.pa)/(pow(b.pt,2)+pow(b.pa,2));
	return c;
}

//SoPhuc cong(SoPhuc a,SoPhuc b){
//	SoPhuc c;
//	c.pt=a.pt+b.pt;
//	c.pa=a.pa+b.pa;
//	return c;
//}
//
//SoPhuc tru(SoPhuc a,SoPhuc b){
//	SoPhuc c;
//	c.pt=a.pt-b.pt;
//	c.pa=a.pa-b.pa;
//	return c;
//}
//
//SoPhuc nhan(SoPhuc a,SoPhuc b){
//	SoPhuc c;
//	c.pt=a.pt*b.pt-a.pa*b.pa;
//	c.pa=a.pt*b.pa+a.pa*b.pt;
//	return c;
//}
//
//SoPhuc chia(SoPhuc a,SoPhuc b){
//	SoPhuc c;
//	c.pt=(a.pt*b.pt+a.pa*b.pa)/(pow(b.pt,2)+pow(b.pa,2));
//	c.pa=(a.pa*b.pt-a.pt*b.pa)/(pow(b.pt,2)+pow(b.pa,2));
//	return c;
//}

int main(){
	SoPhuc a,b,c;
	cin>>a;
	cin>>b;
	c=a+b;
	cout<<c;
	c=a-b;
	cout<<c;
	c=a*b;
	cout<<c;
	c=a/b;
	cout<<c;
	
//	SoPhuc a,b,tong,hieu,tich,thuong;
//	cout<<"nhap so phuc thu nhat: "<<endl;a.nhap();
//	cout<<"nhap so phuc thu hai: "<<endl;b.nhap();
//	cout<<"Tong: ";tong=cong(a,b);
//	tong.xuat();
//	cout<<endl<<"Hieu: ";hieu=tru(a,b);
//	hieu.xuat();
//	cout<<endl<<"Tich: ";tich=nhan(a,b);
//	tich.xuat();
//	cout<<endl<<"Thuong: ";thuong=chia(a,b);
//	thuong.xuat();
}

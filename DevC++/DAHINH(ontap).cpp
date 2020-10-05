#include<iostream>

using namespace std;

class congdan{
	private:
		int cmnd;
		string hoten;
	public:
		congdan(int cmnd,string hoten){
			this->cmnd=cmnd;
			this->hoten=hoten;
		}	
		void nhap();
		virtual void xuat();
}; 
void congdan::nhap(){
	cout<<"nhap cmnd: ";cin>>cmnd;
	cout<<"nhap hoten: ";
	cin.ignore();
	getline(cin,hoten);
}
void congdan::xuat(){
	cout<<"cmnd: "<<cmnd<<endl;
	cout<<"hoten: "<<hoten<<endl;
}

class sinhvien:public congdan{
	private:
		string tentruong;
	public:
		sinhvien(int cmnd,string hoten,string tentruong);
		void nhap();
		void xuat();	
};
sinhvien::sinhvien(int cmnd,string hoten,string tentruong):congdan(cmnd,hoten){
	this->tentruong=tentruong;
}
void sinhvien::nhap(){
	congdan::nhap();
	cout<<"nhap tentruong: ";getline(cin,tentruong);
}
void sinhvien::xuat(){
	congdan::xuat();
	cout<<"tentruong: "<<tentruong<<endl;
}
class sinhviench:public sinhvien{
	private:
		float diemtb;
	public:
		sinhviench(int cmnd,string hoten,string tentruong,float diemtb):sinhvien(cmnd,hoten,tentruong){
			this->diemtb=diemtb;
		}
		void nhap();
		void xuat();
};
void sinhviench::nhap(){
	sinhvien::nhap();
	cout<<"nhap diemtb: ";cin>>diemtb;
}
void sinhviench::xuat(){
	sinhvien::xuat();
	cout<<"diemtb: "<<diemtb<<endl;
}


int main(){
	congdan cd(0,"a b c");
//	cd.nhap();
//	cd.xuat();
	sinhvien sv(0,"d","dd");
//	sv.nhap();
//	sv.xuat();
	sinhviench svch(1,"dd","gg",11.1);
//	ch.nhap();
//	ch.xuat();
	congdan*cdptr=&cd;
	cdptr->xuat();
	cdptr=&sv;
	cdptr->xuat();
	cdptr=&svch;
	cdptr->xuat();
}

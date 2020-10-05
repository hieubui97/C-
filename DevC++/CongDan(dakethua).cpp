#include<iostream>
using namespace std;

class congdan{
	private:
		int cmnd;
		string hoten;
	public:
		congdan(int cmnd,string hoten);
		void nhap();
		void in();	
};
congdan::congdan(int cmnd,string hoten){
	this->cmnd=cmnd;
	this->hoten=hoten;
}
void congdan::nhap(){
	cout<<"nhap cmnd: ";cin>>cmnd;
	cout<<"nhap hoten: ";
	//cin>>hoten;
	cin.ignore();
	getline(cin,hoten);
}
void congdan::in(){
	cout<<"hoten: "<<hoten<<endl;
	cout<<"cmnd: "<<cmnd<<endl;
}

class giaovien:public congdan{
	protected:
		string tentruong;
	public:
		giaovien(int cmnd,string hoten,string tentruong):congdan(cmnd,hoten){
			this->tentruong=tentruong;
		}
		void nhap();
		void in();	
};
void giaovien::nhap(){
	congdan::nhap();
	cout<<"nhap ten truong: ";
	//cin>>tentruong;
	//cin.ignore();
	getline(cin,tentruong);
}
void giaovien::in(){
	congdan::in();
	cout<<"tentruong: "<<tentruong<<endl;
}
class sinhvien:public congdan{
	protected:
		string chuyennganh;
	public:
		sinhvien(int cmnd,string hoten,string chuyennganh):congdan(cmnd,hoten){
			this->chuyennganh=chuyennganh;
		}
		void nhap();
		void in();
};
void sinhvien::nhap(){
	congdan::nhap();
	cout<<"nhap chuyen nganh: ";
	//cin.ignore();
	getline(cin,chuyennganh);
}
void sinhvien::in(){
	congdan::in();
	cout<<"chuyen nganh: "<<chuyennganh<<endl;
}
class sinhviench:public giaovien,public sinhvien{
	private:
		float diemTB;
	public:
		sinhviench(int cmnd,string hoten,string chuyennganh,string tentruong,float diemTB):sinhvien(cmnd,hoten,chuyennganh),giaovien(cmnd,hoten,tentruong){
			this->diemTB=diemTB;
		}
		void in(){
			sinhvien::in();
			cout<<"ten truong: "<<tentruong<<endl;
			cout<<"diemTB: "<<diemTB<<endl;
		}
};


int main(){
//	congdan cd(10,"nam van");
//	cd.nhap();
//	cd.in();
//	giaovien gv(10,"nguyen van a","hv ktqs");
//	gv.nhap();
//	gv.in();
//	sinhvien sv(1,"a","b");
//	sv.nhap();
//	sv.in();
	sinhviench svch(1,"nguyen van a","cong nghe tt","hoc vien ktQS",6.5);
	svch.in();
	
}

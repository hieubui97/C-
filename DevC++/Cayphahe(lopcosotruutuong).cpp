#include<iostream>
using namespace std;

class nguoi{		//lop co so truu tuong
	protected:
		string hoten;
	public:
		nguoi(string hoten){
			this->hoten=hoten;
		}
		virtual bool check(float dtb)=0;
		virtual void xuat()=0;	
};
class sinhvien:public nguoi{
	private:
		float dtb;
	public:
		sinhvien(string name,float dtb):nguoi(name),dtb(dtb){	}
		bool check(float dtb){
			return(dtb>=6.5);
		}	
		void xuat(){
			cout<<"hoten: "<<hoten<<endl;
			if(check(dtb)) cout<<"duoc khen thuong"<<endl<<endl;
			else cout<<"khong duoc khen thuong"<<endl<<endl;
		}
};
class giangvien:public nguoi{
	private:
		float dtb;
	public:
		giangvien(string name,float dtb):nguoi(name),dtb(dtb){	}
		bool check(float dtb){
			return(dtb>=8);
		}	
		void xuat(){
			cout<<"hoten: "<<hoten<<endl;
			if(check(dtb)) cout<<"duoc khen thuong"<<endl<<endl;
			else cout<<"khong duoc khen thuong"<<endl<<endl;
		}	
};

int main(){
	sinhvien sv("Bui hieu",7.5);
	sv.xuat();
	giangvien gv("nguyen van a",7.5);
	gv.xuat();
	return 0;
}

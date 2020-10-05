#include<iostream>
using namespace std;

class sinhvien{
	protected:
		string hoten;
		int msv;
	public:
		sinhvien(string hoten,int msv){
			this->hoten=hoten;
			this->msv=msv;
		}
		virtual void in(){
			cout<<"hoten: "<<hoten<<endl;
			cout<<"msv: "<<msv<<endl;
		}	
};

class sinhvien1:public sinhvien{
	protected:
		string tenkhoa;
	public:
		sinhvien1(string hoten,int msv,string tenkhoa):sinhvien(hoten,msv),tenkhoa(tenkhoa){}
		virtual void in(){
			sinhvien::in();
			cout<<"tenkhoa: "<<tenkhoa<<endl;
		}
};
int main(){
	sinhvien sv("thanos",11);
	sinhvien1 sv1("hieu bui",1,"cntt");
	sinhvien*svptr=&sv;
	svptr->in();
	svptr=&sv1;
	svptr->in();
}

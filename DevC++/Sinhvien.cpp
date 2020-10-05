#include<iostream>
using namespace std;

class sinhvien{
	private:
		string hoten;
		struct ngaysinh{
			int ngay;
			int thang;
			int nam;
		};
		ngaysinh ns;
		string gioitinh;
		float toan,ly,hoa,dtb;
	public:
		void nhap()	;
		float tinhdtb(){
			dtb=(toan+ly+hoa)/3;
		}
		void in(){
			cout<<"hoten: "<<hoten<<endl;;
			cout<<"ngaysinh: "<<ns.ngay<<"/"<<ns.thang<<"/"<<ns.nam<<endl;
			cout<<"gioitinh: "<<gioitinh<<endl;
			cout<<"toan: "<<toan<<endl;
			cout<<"ly: "<<ly<<endl;
			cout<<"hoa: "<<hoa<<endl;
			cout<<"dtb: "<<dtb<<endl;
		}
};
void sinhvien::nhap(){
	getline(cin,hoten);
	cin>>ns.ngay;
	cin>>ns.thang;
	cin>>ns.nam;
	cin>>gioitinh;
	cin>>toan;
	cin>>ly;
	cin>>hoa;
}

int main(){
	sinhvien sv;
	sv.nhap();
	sv.tinhdtb();
	sv.in();
//	sinhvien vs(sv);
//	sv.in();
}

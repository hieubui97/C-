#include<iostream>
#include<math.h>
using namespace std;

class Phanso{
	private:
		int tuso,mauso;
	public:
		void nhap();
		void xuat();
		void toigian();
		friend Phanso operator+(Phanso&ps1,Phanso&ps2);
		friend Phanso operator-(Phanso&ps1,Phanso&ps2);
		friend Phanso operator*(Phanso&ps1,Phanso&ps2);
		friend Phanso operator/(Phanso&ps1,Phanso&ps2);
		friend ostream& operator<<(ostream&output,Phanso &ps);
		friend istream& operator>>(istream &input,Phanso &ps){
			input>>ps.tuso>>ps.mauso;
			return input;
		}
};
ostream& operator<<(ostream&output,Phanso &ps){
			output<<ps.tuso<<"/"<<ps.mauso<<endl;
			return output;
		}
void Phanso::nhap(){
	cout<<"nhap tuso: ";cin>>tuso;
	do{
		cout<<"nhap mauso # 0 : ";cin>>mauso;
	}while(mauso==0);
}
void Phanso::xuat(){
	if(tuso==0) cout<<tuso<<endl;
		else if(tuso%mauso==0) cout<<tuso/mauso<<endl;
			else if(tuso<0&&mauso<0) cout<<abs(tuso)<<"/"<<abs(mauso)<<endl;
				 else if(tuso>0&&mauso<0) cout<<-tuso<<"/"<<abs(mauso)<<endl;
					  else cout<<tuso<<"/"<<mauso<<endl;
}
int USCLN(int a,int b){				//tim ucln
	if(a==b) return (a);
	else if(a>b) (USCLN(a-b,b));
		 else return(USCLN(a,b-a));
}
void Phanso::toigian(){
	if(tuso!=0){
		int ucln=USCLN(abs(tuso),abs(mauso));
		tuso=tuso/ucln;
		mauso=mauso/ucln;
	}
}
Phanso operator+(Phanso &ps1,Phanso &ps2){
	Phanso ps;
	ps.tuso=ps1.tuso*ps2.mauso+ps1.mauso*ps2.tuso;
	ps.mauso=ps1.mauso*ps2.mauso;
	return ps;
}
Phanso operator-(Phanso &ps1,Phanso &ps2){
	Phanso ps;
	ps.tuso=ps1.tuso*ps2.mauso-ps1.mauso*ps2.tuso;
	ps.mauso=ps1.mauso*ps2.mauso;
	return ps;
}
Phanso operator*(Phanso &ps1,Phanso &ps2){
	Phanso ps;
	ps.tuso=ps1.tuso*ps2.tuso;
	ps.mauso=ps1.mauso*ps2.mauso;
	return ps;
}
Phanso operator/(Phanso &ps1,Phanso &ps2){
	Phanso ps;
	ps.tuso=ps1.tuso*ps2.mauso;
	ps.mauso=ps1.mauso*ps2.tuso;
	return ps;
}

int main(){
	Phanso ps,ps1,ps2;
	cin>>ps1;
	cin>>ps2;
//	ps1.nhap();
//	ps2.nhap();
	cout<<"tong: ";
	ps=ps1+ps2;
	ps.toigian();
	//ps.xuat();
	cout<<ps;
	cout<<"hieu: ";
	ps=ps1-ps2;
	ps.toigian();
	//ps.xuat();
	cout<<ps;
	cout<<"tich: ";
	ps=ps1*ps2;
	ps.toigian();
	ps.xuat();
	cout<<"thuong: ";
	ps=ps1/ps2;
	ps.toigian();
	ps.xuat();
}

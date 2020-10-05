#include<iostream>
using namespace std;

class phanso{
	private:
		int tu,mau;
	public:
		phanso(int,int);
		friend ostream& operator<<(ostream&,phanso&);
		friend istream& operator>>(istream&,phanso&);
		friend phanso operator+(phanso&,phanso&);
		friend phanso operator-(phanso,phanso);
};
phanso::phanso(int tu,int mau){
	this->tu=tu;
	this->mau=mau;
}
ostream& operator<<(ostream &output,phanso &ps){
	output<<ps.tu<<"/"<<ps.mau<<endl;
	return output;
}
phanso operator+(phanso&ps1,phanso&ps2){
	phanso ps(0,1);
	ps.tu=ps1.tu*ps2.mau+ps1.mau*ps2.tu;
	ps.mau=ps1.mau*ps2.mau;
	return ps;
}
phanso operator-(phanso ps1,phanso ps2){
	phanso ps(0,1);
	ps.tu=ps1.tu*ps2.mau-ps1.mau*ps2.tu;
	ps.mau=ps1.mau*ps2.mau;
	ps2.mau=ps2.mau+2;
	return ps2;
}

int main(){
	phanso ps(0,1);
	phanso ps1(5,7);
	phanso ps2(6,8);
	ps=ps1-ps2;
	cout<<ps;
}

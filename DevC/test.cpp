#include <iostream>
using namespace std;
void ToiGianPhanSo(int &tuso,int &mauso);
class PhanSo{
private:
int tuso,mauso;
public:
PhanSo(int ,int);
PhanSo Nhap();
void ToiGian();
void In();
PhanSo TinhTong(PhanSo);//Phuong thuc tinh tong
friend PhanSo TinhTich(PhanSo ps1,PhanSo ps2)//Dung ham ban
{
PhanSo ps3(1,1);
ps3.tuso=ps1.tuso*ps2.tuso;
ps3.mauso=ps1.mauso*ps2.mauso;
return ps3;
}
};
PhanSo::PhanSo(int tu,int mau)
{
tuso=tu;
mauso=mau;
}
PhanSo PhanSo::Nhap(){
int a,b;
cout<<"Nhap tu so:"; cin>>a;
if(a==0) {cout<<"\nBan nhap tu so la 0=> Phan so bang 0 nhap lai tu khac 0:"; cin>>a;}
cout<<"Nhap mau so:"; cin>>b;
if(b==0) {cout<<"\nMau so bang 0 moi nhap lai mau so:"; cin>>b;}
PhanSo ps(a,b);
return ps;
}

void PhanSo::ToiGian(){
ToiGianPhanSo(tuso,mauso);
}
void PhanSo::In()
{
if(tuso%mauso==0) cout<<"Phan so="<<tuso/mauso;
else
{
cout<<"Phan so="<<tuso<<"/"<<mauso;
}
}
PhanSo PhanSo::TinhTong(PhanSo ps2)
{
int tu=tuso*ps2.mauso+ps2.tuso*mauso;
int mau=mauso*ps2.mauso;
PhanSo ps3(tu,mau);
return ps3;
}

int main(){
PhanSo ps1(1,1);
cout<<"Nhap PS1"<<endl;
ps1=ps1.Nhap();
ps1.ToiGian();
ps1.In();
PhanSo ps2(1,1);
cout<<"\nNhap PS2"<<endl;
ps2=ps2.Nhap();
ps2.ToiGian();
ps2.In();
PhanSo ps3=ps1.TinhTong(ps2);
cout<<"\n---------------------------------";
cout<<"\nTONG cua PS1 va PS2 la ";
ps3.ToiGian();
ps3.In();
cout<<endl;
cout<<"\nTICH cua PS1 va PS2 la ";
PhanSo ps4=TinhTich(ps1,ps2);
ps4.ToiGian();
ps4.In();
cout<<endl;
return 1;
}
void ToiGianPhanSo(int &tuso,int &mauso)
{
int a=tuso,b=mauso;
while(a!=b)
{
if(a>b) a=a-b;
else b=b-a;
}
tuso=tuso/a;
mauso=mauso/a;
}

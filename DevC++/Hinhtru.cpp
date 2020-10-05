#include<iostream>
using namespace std;

class diem{
	private:
		float x,y;
	public:
		diem(float x,float y){
			this->x=x;
			this->y=y;
		}
		~diem(){
		}
		void nhap1();
		void xuat1();
};
void diem::nhap1(){
	cout<<"x= ";cin>>x;
	cout<<"y= ";cin>>y;
}
void diem::xuat1(){
	cout<<"x= "<<x<<endl;
	cout<<"y= "<<y<<endl;
}

class htron:public diem{
	protected:
		float bk;
	public:
		htron(float x,float y,float r):diem(x,y),bk(r){
		}
		~htron(){
		}
		void nhap2(){
			nhap1();
			cout<<"bk= ";cin>>bk;
		}
		void xuat2(){
			xuat1();
			cout<<"bk= "<<bk<<endl;
		}
		void chuvi(){
			double p=2*3.14*bk;
			cout<<"chuvi htron: "<<p<<endl;
		}
		void dientich(){
			double s=3.14*bk*bk;
			cout<<"dientich htron: "<<s<<endl;
		}
};
 
class htru:public htron{
	private:
		float cc;
	public:
		htru(float x,float y,float r,float h):htron(x,y,r),cc(h){
		}
		~htru(){
		}	
		void nhap3(){
			nhap2();
			cout<<"cc= ";cin>>cc;
		}
		void xuat3(){
			xuat2();
			cout<<"cc= "<<cc<<endl;
		}
		void dientichtp(){
			double s=2*3.14*bk*bk+2*3.14*bk*cc;
			cout<<"dientich htru: "<<s<<endl;
		}
		void thetich(){
			double v= 3.14*bk*bk*cc;
			cout<<"thetich htru: "<<v<<endl;
		}
};
int main(){
	diem o(0,0);
	htron c(0,0,5);
	c.xuat2();
	c.chuvi();
	c.dientich();
	htru u(0,0,5,5);
	u.xuat3();
	u.dientichtp();
	u.thetich();
	return 0;
}

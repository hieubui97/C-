#include<iostream>
using namespace std;

class nhanvien{
	protected:
		string name;
		int age;
		string sex;
	public:
		nhanvien(string name,int age,string sex){
			this->name=name;
			this->age=age;
			this->sex=sex;
		}
		virtual void in()=0;
		virtual double luong()=0;
};
class canbo:public nhanvien{
	private:
		int giolam;
		float hesoluong;
		
	public:
		canbo(string name,int age,string sex,int gio,float hsl):nhanvien(name,age,sex),giolam(gio),hesoluong(hsl){	}
		double luong(){
			return(hesoluong*giolam);	
		}
		void in(){
			cout<<"hoten: "<<name<<endl;
			cout<<"tuoi: "<<age<<endl;
			cout<<"sex: "<<sex<<endl;
		}
};
class laodong:public nhanvien{
	private:
		int giolam;
		float hesoluong;
	public:
		laodong(string name,int age,string sex,int gio,float hsl):nhanvien(name,age,sex),giolam(gio),hesoluong(hsl){}
		double luong(){
			return(hesoluong*giolam*2);
		}
		void in(){
			cout<<"hoten: "<<name<<endl;
			cout<<"tuoi: "<<age<<endl;
			cout<<"sex: "<<sex<<endl;
		}
};

int main(){
	canbo a("nguyen van a",30,"nam",36,5000);
	a.in();
	cout<<"luong: "<<a.luong()<<endl<<endl;
	laodong b("nguyen thi b",25,"nu",40,5000);
	b.in();
	cout<<"luong: "<<b.luong()<<endl;
}

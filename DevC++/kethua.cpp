#include<iostream>
using namespace std;

class student{
	private:
		int msv;
		string hoten;
	public:
		student(int msv,string hoten)	{
			this->msv=msv;
			this->hoten=hoten;
		}
		void display(){
			cout<<"msv:"<<msv<<endl;
			cout<<"hoten:"<<hoten<<endl;
		}
};

class student1:public student{
	private:
		student loptruong;
		int tuoi;
		string sex;
	public:
		student1(int msv,string hoten,student lt,int t,string s):student(msv,hoten),loptruong(lt),tuoi(t),sex(s){}	
		void display1(){
			display();
			cout<<"loptruong:";loptruong.display();
			cout<<"tuoi:"<<tuoi<<endl;
			cout<<"gioitinh:"<<sex<<endl;
		}
};		
	
int main(){
	student st(2,"hoang");
	student1 st1(1,"hieu",st,20,"nam");
	st1.display1();
}

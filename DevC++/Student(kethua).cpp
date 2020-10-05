#include<iostream>
using namespace std;

class student{
	private:
		int studID;
		string studName;
		string studSex;
	public:
		void input();
		void output();	
};
void student::input(){
	cout<<"nhapmsv:";cin>>studID;
	cout<<"nhaphoten:";cin>>studName;
	cout<<"nhapgioitinh:";cin>>studSex;
} 
void student::output(){
	cout<<"msv:"<<studID<<endl;
	cout<<"hoten:"<<studName<<endl;
	cout<<"gioitinh:"<<studSex<<endl;
}
//xay dung lop ke thua tu lop sinh vien
class student1:public student{
	private:
		int age;
		string addr;
	public:
		void intput1(){
			input();
			cout<<"nhaptuoi:";cin>>age;
			cout<<"nhapdiachi:";cin>>addr;	
		}
		void output1(){
			output();
			cout<<"tuoi:"<<age<<endl;
			cout<<"diachi:"<<addr<<endl;
		}
			
};

int main(){
	student1 st1;
	st1.intput1();
	st1.output1();
	return 0;
}

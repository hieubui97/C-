#include<iostream>
using namespace std;

class student{
	private:
		int ID;
		string name;
		string sex;
		int age;
	public:
		student(int ID,string name,string sex,int age){
			this->ID=ID;
			this->name=name;
			this->sex=sex;
			this->age=age;
		}	
		void display();	
};

void student::display(){
	cout<<"msv:"<<ID<<endl;
	cout<<"hoten:"<<name<<endl;
	cout<<"gioitinh:"<<sex<<endl;
	cout<<"tuoi:"<<age<<endl;
}

class teacher{
	private:
		string bomon;
		float wage;
		
	public:
		teacher(string bomon,float wage){
			this->bomon=bomon;
			this->wage=wage;	
		}
	
		void display1(){
			cout<<"bomon:"<<bomon<<endl;
			cout<<"luong:"<<wage<<endl;
		}
};
//xay dung lop da ke thua cao hoc
class caohoc:public student,public teacher{
	private:
		string addr;
	public:
		caohoc(int ID,string name,string sex,int age,string bomon,float wage,string ad):student(int ID,string name,string sex,int age),teacher(string bomon,float wage),addr(ad){}
		
};

//xay dung lop ke thua tu lop sinh vien
//class student1:public student{
//	private:
//		int age;
//		string addr;
//	public:
//		student1(int ID,string name,string sex,int a,string ad):student(ID,name,sex),age(a),addr(ad){}
//		void output1(){
//			output();
//			cout<<"tuoi:"<<age<<endl;
//			cout<<"diachi:"<<addr<<endl;
//		}
//};
//int main(){
//	student1 st1(102,"hieu","nam",20,"hanoi");
//	st1.output1();
//	return 0;
//}
int main(){
	
	return 0;
}

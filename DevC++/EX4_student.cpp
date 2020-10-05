#include<iostream>
using namespace std;
class Student{
	//du lieu thanh vien
	private:
		int ID;
		int age;
		static int sum;
		static int count;
	public:
		Student(int ,int);
		void total();
		static float average();
};
Student::Student(int ID,int age){
	this->ID=ID;
	this->age=age;
}
//khoi tao du dieu static
int Student::sum=0;
int Student::count=0;
void Student::total(){
	sum=sum+age;
	count++;
}
float Student::average(){
	return ((float)sum/count);
}

int main(){
	Student st[3]={{100,23},{100,24},{100,20}};
	for(int i=0;i<3;i++) st[i].total();
	cout<<"tuoi trung binh: "<<st[0].average()<<endl;
	return 0;
}

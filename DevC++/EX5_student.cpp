#include<iostream>
using namespace std;
class Student{
	private:
		int ID;
		int age;
		string name;
	public:
		//khoi tao khong tham so
		Student(){
			this->ID=10;
			this->name="nguyen van a";
			this->age=20;
			cout<<"khoi tao k tham so"<<endl;
		}
		//khoi tao co tham so
		Student(int ID,string name,int age){
			this->ID=ID;
			this->name=name;
			this->age=age;
			cout<<"khoi tao 3 tham so"<<endl;
		}
		Student(int ID,string name){
			this->ID=ID;
			this->name=name;
			cout<<"khoi tao 2 tham so"<<endl;
		}
		//khai bao ham huy
		~Student(){
			cout<<"day la ham huy"<<endl;
		}
		void show(){
			cout<<this->ID<<endl;
			cout<<this->name<<endl;
			cout<<this->age<<endl;
		}	
};

int main(){
	Student st1(101,"tran van b",22);
	st1.show();
	Student st2;
	st2.show();
	Student st3(202,"doan van c",222);
	st3.show();
	return 0;
}

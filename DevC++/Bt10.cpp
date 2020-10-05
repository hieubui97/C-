#include<iostream>
using namespace std;

class teacher{
	private:
		int num;
		string name;
		char *sex;
	public: 
		teacher(int , string nam,char* );
		virtual void display(){
			cout<<"num: "<<num<<endl;
			cout<<"name: "<<name<<endl;
			cout<<"sex: "<<sex<<endl;
		}
};
teacher::teacher(int n,string nam,char *s){
	num=n;
	name=nam;
	sex=s;
}

class birthdate{
	private:
		int day;
		int month;
		int year;
	public:
		birthdate(int,int,int);
		void change();
		virtual void display(){
			cout<<day<<"/"<<month<<"/"<<year<<endl;
		}	
};

class professor: public teacher{
	private:
		double wage;
		birthdate birthday;
	public:
		professor(int num,string nam,char *s,int day,int month,int year,double wage):teacher(num,nam,s),birthday(day,month,year){
			this->wage=wage;
		}
		void change(int, int, int);
		void display(){
			display();
			birthday.display();
			cout<<wage<<endl;
		}
};

int main(){
	
	professor p(11,"bui minh hieu","n",6,8,1997,100000);
	p.display();
}

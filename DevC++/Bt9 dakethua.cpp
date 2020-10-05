#include<iostream>
using namespace std;

class teacher{
	protected:
		string name;
		int age;
		char *sex;
		string title;
		string addr;
		string tel;
	public:
		teacher(string nam,int a,char *s,string tit,string ad,string t){
			this->name=nam;
			this->age=a;
			this->sex=s;
			this->title=tit;
			this->addr=ad;
			this->tel=t;
		}
		void display(){
			cout<<"name: "<<name<<endl;
			cout<<"age: "<<age<<endl;
			cout<<"sex: "<<sex<<endl;
			cout<<"title: "<<title<<endl;
			cout<<"addr: "<<addr<<endl;
			cout<<"tel: "<<tel<<endl;
		}	
};

class cadre{
	protected:
		string name;
		int age;
		char *sex;
		string post;
		string addr;
		string tel;
	public:
		cadre(string nam,int a,char *s,string p,string ad,string t){
			this->name=nam;
			this->age=a;
			this->sex=s;
			this->post=p;
			this->addr=ad;
			this->tel=t;
		}
		void display(){
			cout<<"name: "<<name<<endl;
			cout<<"age: "<<age<<endl;
			cout<<"sex: "<<sex<<endl;
			cout<<"post: "<<post<<endl;
			cout<<"addr: "<<addr<<endl;
			cout<<"tel: "<<tel<<endl;
		}	
};

class teacher_cadre:virtual public teacher, virtual public cadre{
	private:
		double wage;
	public:
		teacher_cadre(string nam,int a,char *s,string tit,string ad,string t,string p,double w):teacher(nam,a,s,tit,ad,t),cadre(nam,a,s,p,ad,t),wage(w){
		}
		void show(){
			teacher::display();
			cout<<"post: "<<post<<endl;
			cout<<"wage: "<<wage<<endl;
		}	
};

int main(){
	teacher t("nguyen van a",35,"m","daituong","hanoi","01249937063");
	cadre c("nguyen thi b",32,"w","cntt","thaibinh","01636069596");
	teacher_cadre tc("tran van c",40,"m","trung ta","phutho","0904826425","khmt",95000);
	tc.show();
}

#include<iostream>
using namespace std;

class sophuc{
	protected:
		double pt;
		double pa;
};

class daysophuc:public sophuc{
	private:
		sophuc sp[100];
	public:
		void nhap();
		void xuat();
		void sapxep(sophuc sp[]);	
};
void daysophuc::nhap(){
	cout<<"nhap phan thuc: ";cin>>pt;
	cout<<"nhap phan ao: ";cin>>pa;
}
void daysophuc::xuat(){
	cout<<pt<<"+ i*"<<pa<<endl;
}
//daysophuc::sapxep(sophuc sp[]){
//	for(int i=0;i<100;i++){
//		int min=i;
//		for(int j=i+1;j<n;j++){
//			if(sp[i])
//		}
//	}
//}

int main(){
	daysophuc a;
	a.nhap();
	a.xuat();
}

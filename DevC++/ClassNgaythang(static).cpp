#include<iostream>
using namespace std;

class day{
	private :
		static int month;
		static int year;
	public :
		static void InPut();
		static void OutPut();
};
int day::month=1;
int day::year=1;
void day::InPut(){
	do{
		cout<<"nhap thang(1-12): ";cin>>month;
	}while(month<1||month>12);
	cout<<"nhap nam: ";cin>>year;
}
void day::OutPut(){
	if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
		cout<<"thang "<<month<<" nam "<<year<<" co 31 ngay";
	}
	else if(month!=2)	cout<<"thang "<<month<<" nam "<<year<<" co 30 ngay";
		 else{
		 if((year%4==0&&year%100!=0)||year%400==0){
			cout<<"thang "<<month<<" nam "<<year<<" co 29 ngay";
		 }
		 else cout<<"thang "<<month<<" nam "<<year<<" co 28 ngay";
		 }
	
}
int main(){
	day day;
	day.InPut();
	day.OutPut();
}

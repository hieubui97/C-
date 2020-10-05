#include<iostream>
using namespace std;

class ngaytrongthang{
	private:
		static int thang;
		static int nam;
	public:
		static void tinhsongay(int thang,int nam);
};
void ngaytrongthang::tinhsongay(int thang,int nam){
	if(thang==1||thang==3||thang==5||thang==7||thang==8||thang==10||thang==12) cout<<"31";	
	
	else if(thang<=12&&thang>=1&&thang!=2) cout<<"30";
		 else if(thang ==2){
		 	if((nam%4==0&&nam%100!=0)||nam%400==0) cout<<"29";
		 	else cout<<"28";
		 }
		 	  else cout<<"sai thang";
	}
int main(){
	ngaytrongthang::tinhsongay(2,2000);  //pthuc tinh co the goi qua ten lop khi khong co doi tuong nao ton tai
	return 0;
}

//nhap vao 1 ngay thang nam in ra ngay ke tiep cua no,
#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int day;
	int month;
	int year;
	cout<<"Nhap vao ngay: ";
	cin>>day;
	cout<<"Nhap vao thang: ";
	cin>>month;
	cout<<"Nhap vao nam: ";
	cin>>year;
	double day1=day+1;
	if((day==30 && month==4) || (day==30 && month==6)||(day==30 && month==9)||(day==30 && month==11))
	{
		day1=1 ;
		double month1=month+1;
		cout<<"Ngay ke tiep cua "<<day<<"/"<<month<<"/"<<year<<" la: "<<day1<<"/"<<month1<<"/"<<year;
	}
	else if((day==31 && month==1)|| (day==31 && month==3) ||(day==31 && month==5)||(day==31 && month==7)
	||(day==31 && month==8)||(day==31 && month==10))
	{
		day1=1 ;
		double month1=month+1;
		cout<<"Ngay ke tiep cua "<<day<<"/"<<month<<"/"<<year<<" la: "<<day1<<"/"<<month1<<"/"<<year;
	}
	else
	 if(month==2){
	 
		if(day>29){ cout<<"Nhap sai ngay.(thang 2 chi co 28 ngay, 29 doi voi nam nhuan)";}
		else if ((year%4==0 && year%100!=0) || ( year%400==0  ))
		if(day==28) cout<<"Ngay ke tiep cua "<<day<<"/"<<month<<"/"<<year<<" la: "<<(day+1)<<"/"<<month<<"/"<<year;
		else if(day==29) cout<<"Ngay ke tiep cua "<<day<<"/"<<month<<"/"<<year<<" la: "<<"1"<<"/"<<(month+1)<<"/"<<year;
		
 		else if(day<28)cout<<"Ngay ke tiep cua "<<day<<"/"<<month<<"/"<<year<<" la: "<<(day+1)<<"/"<<(month+1)<<"/"<<year;

}
	
    else if(day==31 && month==12)
{
	double year1=year+1;
	double month1=1;
	double day1=1 ;
	cout<<"Ngay ke tiep cua "<<day<<"/"<<month<<"/"<<year<<" la: "<<day1<<"/"<<month1<<"/"<<year1;
}
else	cout<<"Ngay ke tiep cua "<<day<<"/"<<month<<"/"<<year<<" la: "<<day1<<"/"<<month<<"/"<<year;
	return 0;
}

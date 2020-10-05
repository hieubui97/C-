#include<iostream>
using namespace std;

class Date{
	private:
		int day;
		int month;
		int year;
		const static int DAYINMONTH[];
		const static string STRMONTH[];
		const static string STRDAY[];
	public:	
		Date();
		Date(int day,int month,int year);
		int getDay(int);
		int getMonth(int);
		int getYear(int);
		int getDayofweek(int day,int month,int year);
		void setDate(int day,int month,int year);
		void setDay(int day);
		void setMonth(int month);
		void setYear(int year);
		void print();
};
const string Date::STRMONTH[]={"jan","feb","mar","apr","may","jun","jul","aug","sep","oct","nov","dec"};	
const string Date::STRDAY[]={"sunday","monday","tuesday","wednesday","thursday","friday","saturday"};	
const int Date::DAYINMONTH[]={31,28,31,30,31,30,31,31,30,31,30,31};

Date::Date(){
	
}

int main(){
	
	return 0;
}

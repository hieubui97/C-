#include<iostream>
using namespace std;
class Time{
	private:
		int hour;
		int minute;
		int second;
	public:
		Time();
	//	Time(int h,int m,int s):hour(h),minute(m),second(s){};
		Time(int h,int m,int s){
			this->hour=h;
			this->minute=m;
			(*this).second=s;   // =voi this->second-s=s;
		}
		void show_time(){
			cout<<this->hour<<":"<<this->minute<<":"<<this->second<<endl;
		};	
		friend Time operator++(Time&t1);

};
Time::Time(){
	this->hour=0;
	this->minute=0;
	this->second=0;
}
Time operator++(Time &t1){
	t1.second+=1;
	if(t1.second==60){
		t1.second=0;
		t1.minute+=1;
		if(t1.minute==60){
			t1.minute=0;
			t1.hour+=1;
			if(t1.hour==24) t1.hour=0;
		}
	}
}
int main(){
	Time t1(23,59,59);	
	++t1;
	t1.show_time();
	return 0;
}

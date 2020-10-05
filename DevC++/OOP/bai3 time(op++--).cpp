#include<iostream>
using namespace std;

class time{
	private:
		int gio;
		int phut;
		int giay;
	public:
		time(int gio,int phut,int giay){
			this->gio=gio;
			this->phut=phut;
			this->giay=giay;
		}	
		friend time operator++(time &t);
		friend time operator--(time &t);
		void showtime(){
			cout<<gio<<":"<<phut<<":"<<giay<<endl;
		}
};
time operator++(time&t){
	t.giay+=1;
	if(t.giay==60){
		t.giay=0;
		t.phut+=1;
		if(t.phut==60){
			t.phut=0;
			t.gio+=1;
			if(t.gio==24) t.gio=0;
		}
	}
}
time operator--(time&t){
	t.giay-=1;
	if(t.giay==-1){
		t.giay=59;
		t.phut-=1;
		if(t.phut==-1){
			t.phut=59;
			t.gio-=1;
			if(t.gio==-1) t.gio=23;
		}
	}
}

int main(){
	time t(23,59,59);
	++t;
	t.showtime();
	time t1(0,0,0);
	--t1;
	t1.showtime();
}




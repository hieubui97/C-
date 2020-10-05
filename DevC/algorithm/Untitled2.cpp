#include<iostream>
#include<time.h>
#include<stdlib.h>

#define n 15
#define b 40

using namespace std;

struct item{
	int c;
	int w;
};

int  a[n], s[n];
item x[n];
int maxv = 0;

void nhap(){
	srand(time(NULL));
	for(int i = 0; i < n; i++){
		x[i].c = rand()%100;
		x[i].w = rand()%50;
	}
}

void xuat(){
	cout<<"c: ";
	for(int i = 0; i < n; i++)
		cout<<x[i].c<<"  ";
	cout<<"\nw: ";
	for(int i = 0; i < n; i++)
		cout<<x[i].w<<"  ";
	cout<<endl;		
}

//Luu cau' hinh` ma` gia tri maxv lon' nhat'
void save(){
	int i;
	for(i = 0; i < n; i++){
		s[i] = a[i];	
	}
}

int weight(){
	int kl = 0;
	for(int i = 0; i < n; i++){
		if(a[i] != 0) kl += x[i].w;
		
	}
	return kl;
}

int value(){
	int v = 0;
	for(int i = 0; i < n; i++){
		if(a[i] != 0) v += x[i].c;
	}
	return v;
}

void output(){
	int i;
	cout<<"\nCau hinh: ";
	for(i = 0; i < n; i++)
		cout<<s[i];
	cout<<endl;	
}

void Try(int i){
	int j;
	for(j = 0; j <= 1; j++){
		a[i] = j;
		if(i < n-1)
			Try(i+1);
		else{
			if(weight() <= b){
				save();
				output();
				cout<<"maxv: "<<value()<<"	weight: "<<weight()<<endl;	
			}
			if(maxv < value() && weight() <= b){
				 maxv = value();
				 save();	 
			}		
			
//			save();
//			output();
//			cout<<"maxv: "<<value()<<"	weight: "<<weight()<<endl;	
		}	
	}
}

int main(){
	nhap();
	xuat();
	Try(0);
	
	cout<<"MaxV: "<<maxv<<endl;
	
}

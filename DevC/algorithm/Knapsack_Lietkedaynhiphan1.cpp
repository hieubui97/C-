#include<iostream>
#include<time.h>
#include<stdlib.h>

#define n 15
#define b 50

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
			if(maxv < value() && weight() <= b){
				 maxv = value();
				 save();
			}		
			
		}	
	}
}

int main(){
	nhap();
	xuat();
	
	clock_t start = clock();
	Try(0);
	clock_t finish = clock();
	double t = double(finish - start)/CLOCKS_PER_SEC;
	
	output();
	cout<<"MaxV: "<<maxv<<endl;
	
	cout<<"\nThoi gian chay thuat toan: "<<t<<" (s)"<<endl;
}

#include<iostream>
#define n 6
#define b 19
using namespace std;

struct item{
	int c;
	int w;
};

int a[n], s[n];
item x[n] = {{7,3}, {10,4}, {20,5}, {19,7}, {13,6}, {40,9}};
int maxv = 0;

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

void xuat(){
	int i;
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
//		else
//			xuat();
		else{
			if(maxv < value() && weight() <= b){
				 maxv = value();
				 save();
			}
		}	
	}
}

int main(){
	Try(0);
	xuat();
	cout<<"MaxV: "<<maxv;
	
}

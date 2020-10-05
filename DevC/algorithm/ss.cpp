#include<iostream>

using namespace std;

struct CongViec{
	int start;
	int end;
};

void swap(CongViec &a, CongViec &b){
	CongViec temp = a;
	a = b;
	b = temp;
}

void sort(CongViec cv[], int n){
	for(int i = 0; i < n-1; i++)
		for(int j = i+1; j < n; j++)
			if(cv[i].end - cv[i].start > cv[j].end - cv[j].start)
				swap(cv[i], cv[j]);
}

int main(){
	CongViec cv[100], tg;
	int n, i, j, d;
	cout<<"Nhap so cv: ";	cin>>n;
	cout<<"Nhap thoi gian: ";
	for(i = 0; i < n; i++){
		cin>>cv[i].start>>cv[i].end;
	}
	
	int daxet[n];
	
	for(i = 0; i < n; i++){
		daxet[i] = 0;
	}
	
	d = 0;
	
	daxet[d] = 1;
	
	i = 0;
	
	while(i < n){
		for(int j = i; j < n; j++){
			if(!daxet[j]){
				
			}
		}
	}
	
}

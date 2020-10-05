#include<iostream>
#define n 5
#define start 1
using namespace std;

int a[n], b[n], s[n];
int gttu = 1000;
int A[n][n] = {{0,1,2,7,5},{1,0,4,4,3},{2,4,0,1,2},{7,4,1,0,3},{5,3,2,3,0}};

void init(){	
	int i;
	for(i = 0; i < n; i++)
		b[i] = 1;
	a[0] = start;
	b[start] = 0;
}

void save(){
	for(int i = 0; i < n; i++)
		s[i] = a[i];
}

int cost(){
	int c = 0;
	int s = start;
	for(int i = 1; i < n; i++){
		c += A[s][a[i]];
		s = a[i];
	}
	c += A[s][a[0]];
	return c;
}

void xuat(){
	int i;
	cout<<"Gia tri toi uu: "<<gttu<<endl;
	for(i = 0; i < n; i++)
		cout<<s[i]<<" ";
	cout<<start;	
}

void Try(int i){
	int j;
	for(j = 0; j < n; j++){
		if(b[j] == 1){
			a[i] = j;
			b[j] = 0;	//Ghi nhan trang thai moi (  da dung` )
			
			if(i < n-1)
				Try(i+1);	//Khi chua du N so thi thu o vi tri tiep theo
			else {
				if(cost() < gttu){
					gttu = cost();
					save();
				}
			}
			b[j] = 1;	
		}
	}
}

int main(){
	init();
	Try(1);
	xuat();
}

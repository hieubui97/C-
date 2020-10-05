#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;

void Nhap(float**a,int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<"a["<<i<<"]"<<"["<<j<<"] = ";
			cin>>a[i][j];
		}
	}
}
float TimMax(float**a,int m,int n){
	float max=a[0][0];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]>max) max=a[i][j];
		}
	}
	return max;
}

void Swap(float &a,float &b){
	float t=a;
	a=b;
	b=t;
}

void SapXep(float**a,int m,int n){
	for(int i=0;i<m*n-1;i++){
		for(int j=i+1;j<m*n;j++){
			if(a[i/n][i%n]>a[j/n][j%n])
			Swap(a[i/n][i%n],a[j/n][j%n]);
		}
	}
}

void Xuat(float**a,int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<"	";
		}
		cout<<endl<<endl;
	}
}

void TaoMang(float**a,int m,int n){
	srand(time(NULL));
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			a[i][j]=float(rand())/100;
		}
	}
}

int main(){
	float **a;
	int m,n,i,j;
	cout<<"nhap so hang va cot:"<<endl;
	cout<<"m = ";cin>>m;
	cout<<"n = ";cin>>n;
	a=new float*[m];
	for(i=0;i<m;i++){
		a[i]=new float[n];
	}
	//Nhap(a,m,n);
	TaoMang(a,m,n);   //mang random
	cout<<"phan tu max: "<<TimMax(a,m,n)<<endl;
	cout<<"ma tran sapxep tang dan: "<<endl;
	SapXep(a,m,n);
	Xuat(a,m,n);
	
	for(i=0;i<m;i++){
		delete a[i];
	}
	delete a;
	getch();
}

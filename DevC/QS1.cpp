#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<time.h>
#define max 100
using namespace std;

void input(){
	int a,i;
	srand(time(NULL));
	fstream f;
	f.open("input1.txt");
	for(i=0;i<=max;i++){
		int a=rand();
		f<<a<<endl;
	}
	f.close();
}

//void output(int a[],int n){
//	int i;
//	fstream f;
//	f.open("output1.txt");
//	for(i=0;i<=n;i++){
//		f<<a[i]<<endl;
//		cout<<a[i]<<" ";
//	}
//	f.close();
//}

void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}

void quicksort(int *a, int l, int r)
{
     if(l>=r) return ; // ket thuc
     int i=l;
     int j=r;
     int x=a[l];
     while(i<=j)
     {
                while(a[i]<x) i++;
                while(a[j]>x) j--;
                if(i<=j)
                {
                        swap(a[i],a[j]);
                        i++;j--;
                }
     }
     quicksort(a,l,j);
     quicksort(a,i,r);
     
}

void QS(int a[],int l,int r){
	int i,j,key;
	if (l>=r) return ;
	key=a[l];
	i=l+1;
	j=r;
	while(i<=j){
		while(i<=r&&a[i]<=key) i++;
		while(j>l&&a[j]>key) j--;
		if(i<j) swap(a[i],a[j]);
		i++;
		j--;
	}
	swap(a[l],a[j]);
	QS(a,l,j-1);
	QS(a,j+1,r);
}

int main(){
	input();
	int n=10;
	int *a;
	a=new int[n];
	fstream f;
	f.open("input1.txt");
	for(int i=0;i<=n;i++){
		f>>a[i];
	}
	//QS(a,0,n-1);	
	quicksort(a,0,n);
//	for(int i=0;i<=n;i++){
//		cout<<a[i]<<" ";
//	}

	
}

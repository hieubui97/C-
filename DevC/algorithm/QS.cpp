#include<iostream>
using namespace std;

void swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}

void QS(int a[], int l, int r){
	int i, j, x;
	
	if(l >= r ) return;
	
	i = l+1;
	j = r;
	x = a[l];	// key
	
	while(i <= j){
		while(i<j && a[i]<x) i++;
		while(j>=i && a[j]>=x) j--;
		if(i < j) swap(a[i], a[j]);		 
	}
	swap(a[l], a[j]);
	
	QS(a, l, j-1);
	QS(a, j+1, r);
}

//void QS1(int a[], int l, int r){
//	int i, j, x;
//	
//	if(l >= r ) return;
//	
//	i = l+1;
//	j = r;
//	x = a[l];	// key
//	
//	while(i < j){
//		while(i<=r && a[i]<=x) i++;
//		while(j>l && a[j]>x) j--;
//		
//		if(i < j)
//			swap(a[i], a[j]);
//	}
//	swap(a[l], a[j]);
//	QS1(a, l, j-1);
//	QS1(a, j+1, r);
//}

int main(){
	
	//int a[] = {3,1,7,8,2,6,9};
	//int a[] = {3,5,8,9,4,2,7};
	int a[] = {3,5,8,9,18,21,7,19,3,9,8,4,23,15,3,6,2,1,2,8,7,9,1,4,23,1,17,11,25,23,40,5,6,4,5};
	QS(a,0,34);
	for(int i = 0; i <= 34; i++){
		cout<<a[i]<<" ";
	}
}

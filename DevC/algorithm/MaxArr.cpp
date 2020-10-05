#include<iostream>
using namespace std;

int findMax(int a[], int n){
	int i, io=0;
	for(i = 1; i < n; i++){
		if(a[i] > a[io]) io = i;
	}
	return io;
}

int findX(int a[], int n, int b){
	int i = 0, io;
	while(i<n && a[i]!=b){
		i++;
	}
	if(i < n) io = i;
	else io = -1;
	
	return io;
}

int fx(int a[], int n, int xo){
	int x = 1, f = a[0];
	for(int i = 1; i < n; i++){
		x = x*xo;
		f = f + a[i]*x;	
	}
	return f;
}

int fx2(int a[], int n, int xo){
	int f = a[n-1];
	for(int i = 1; i  < n; i++){
		f = f*xo + a[n-1-i];
	}
	return f;
}

int main(){
	int a[] = {9,2,4,5,3,6,8,4,1,6,5,2,10,15,11,2,1,6,7,3};
	
	int imax = findMax(a,20);
	cout<<"Max a la: a["<<imax<<"] = "<<a[imax]<<endl;
	
	int x = 3;
	cout<<"Vi tri cua ptu "<<x<<": "<<findX(a,20,x)<<endl;
	
	cout<<"fx(1) = "<<fx(a,20,2)<<endl;
	cout<<"fx(2) = "<<fx2(a,20,2);
}

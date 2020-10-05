#include<iostream>
using namespace std;

int Mu(int x, int n){
	if( n == 0) return 1;
	else return(x * Mu(x, n-1));
}

int Tong(int a[], int n){
	if(n == 1) return a[0];
	else return(a[n-1] + Tong(a, n-1));
}

int Max(int a[], int n){
	if(n == 1) return a[0];
	else{
		int x = Max(a, n-1);
		if(a[n-1] > x) return a[n-1];
		else return x;
	}
}

int main(){
	int a[] = {1,4,3,2,5,6,7,5,8,9,4,5,6,2,8};
	cout<<Mu(2,8)<<endl;
	cout<<"Max: "<<Max(a,15)<<endl;
	cout<<"Tong: "<<Tong(a,15)<<endl;
}

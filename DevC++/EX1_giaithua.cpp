#include<iostream>
using namespace std;
int tinhgiaithua(int n){
	if(n<=1) return 1;
	else return(n*tinhgiaithua(n-1));
}

int main(){
	double i,n;
	cout<<"nhap n:";
	cin>>n;
	cout<<n<<"!="<<tinhgiaithua(n);
}

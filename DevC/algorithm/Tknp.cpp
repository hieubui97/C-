#include<iostream>
using namespace std;

int tknp(int a[], int x, int l, int r){
	int m;
	
	if(l > r) return -1;
	
	m = (l+r)/2;
	if(x == a[m]) return m;
	else{
		if(x > a[m])  tknp(a, x, m+1, r);
		else  tknp(a, x, l, m-1);
	}
}

int main(){
	int x;
	int a[] = {0,3,5,7,8,9,10,15,20,22,23,24,25};
	for(int i = 0; i < 13; i++)
		cout<<a[i]<<"  ";
		
	cout<<endl<<"nhap x: ";cin>>x;	
	cout<<"vitri cua x: "<<tknp(a, x, 0, 12);
}

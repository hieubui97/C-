#include<iostream>

using namespace std;

void swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}

void HoanDoi(int a[], int n, int m, int k){
	for(int p = 0; p < m; p++){
		swap(a[k+p],a[n-m+k+p]);
	}
}

void Transpose(int a[], int n, int m,int k){
	if(m == n-m){
		HoanDoi(a,n,m,k);
		return;
	}
	else if(m < n-m){
		HoanDoi(a,n,m,k);
		Transpose(a,n-m,m,k);
	}
	else{
		HoanDoi(a,n,n-m,k);
		k += n-m;
		Transpose(a,m,2*m-n,k);
	}
}

void Xuat(int a[], int n){
	for(int i = 0; i < n; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int a[] = {1,2,3,4,5,6,7,8};
	Xuat(a,8);
	
	int m;
	do{
		cout<<"nhap m: ";	cin>>m;
	}while(m<1 || m>7);
	
	Transpose(a,8,m,0);
	cout<<"Hoan doi "<<m<<" ptu ve cuoi:"<<endl;
	Xuat(a,8);
}

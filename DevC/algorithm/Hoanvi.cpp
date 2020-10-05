#include<iostream>
#define n 5
using namespace std;

int a[n], b[n];

void init(){	
	int i;
	for(i = 0; i < n; i++)
		b[i] = 1;
}

void xuat(){
	int i;
	for(i = 0; i < n; i++)
		cout<<a[i];
	cout<<endl;	
}

void Try(int i){
	int j;
	for(j = 0; j < n; j++){
		if(b[j] == 1){
			a[i] = j+1;
			b[j] = 0;	//Ghi nhan trang thai moi (  da dung` )
			
			if(i < n-1)
				Try(i+1);	//Khi chua du N so thi thu o vi tri tiep theo
			else xuat();	//Khi du N so thi xuat gia tri
			b[j] = 1;		//Tra lai trang thai'
		}
	}
}

int main(){
	init();
	Try(0);
}

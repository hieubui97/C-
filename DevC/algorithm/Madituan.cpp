#include<iostream>
#define n 5
using namespace std;

int a[] = {1,2,2,1,-1,-2,-2,-1};
int b[] = {2,1,-1,-2,-2,-1,1,2};
int h[n][n], sophuongan = 0;

void init(){
	int i, j;
	for(i = 0; i < n; i++)
		for(j = 0; j < n; j++)
			h[i][j] = 0;
}

void xuat(){
	int i, j;
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++)
			cout<<h[i][j]<<"\t";
		cout<<endl;	
	}
	cout<<endl;
}

void Try(int i, int x, int y){
	int u, v, k;
	for(k = 0; k < 8; k++){
		u = x + a[k];
		v = y + b[k];
		if((u >= 0) && (v >= 0) && (u <= n-1) && (v <= n-1) && (h[u][v] == 0)){
			//h[u][v] = i+1;
			h[u][v] = i;
			if(i < n*n-1) Try(i+1,u,v);
			else{
				cout<<"Phuong an "<<++sophuongan<<endl;
				xuat();
				
			}
			h[u][v] = 0;
		}
	}
}

int main(){
	init();
	h[1][2] = 1;
	Try(2,1,2);
}

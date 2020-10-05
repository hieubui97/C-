#include<iostream>
using namespace std;

void floyd(int a[4][4], int n){
	int i,j,k;
	int d[4][4];
	int p[4][4];
	
	// Khoi dong ma tran d va p
	for(i = 0; i < n; i++){
		for(j = 0; j <n; j++){
			d[i][j] = a[i][j];
			p[i][j] = 0;
		}
	}
	
	// Tinh ma tran d va p o buoc lap k
	for(k = 0; k < n; k++)
		for(i = 0; i < n; i++)
			if(d[i][k]>0 && d[i][k]<1000)	// i # k va co duong di tu dinh i den dinh k
				for(j = 0; j < n; j++)
					if(d[k][j]>0 && d[k][j]<1000)	// j # k va co duong di tu dinh k den dinh j
						if(d[i][j] > d[i][k]+d[k][j])	// duong di i -> j qua k ngan hon duong di i -> j qua k-1
						{
							d[i][j] = d[i][k] + d[k][j];
							p[i][j] = k;	// duong di ngan nhat i -> j qua k			
						}
						
	// In bang ket qua
	cout<<"D[i][j]: Bang duong di ngan nhat tu dinh i -> j"<<endl;
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++)	
			cout<<d[i][j]<<"\t";
		cout<<endl;	
	}
	
	cout<<"\nP[i][j]: Duong di ngan nhat tu dinh i -> j qua dinh k"<<endl;
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++)
			cout<<p[i][j]<<"\t";
		cout<<endl;	
	}				
}

int main(){
	int a[4][4] = {{0,5,100,100},{50,0,15,5},{30,100,0,15},{15,100,5,0}};
	floyd(a, 4);
}

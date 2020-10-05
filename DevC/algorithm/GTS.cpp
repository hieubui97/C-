#include<iostream>
#define max 5
using namespace std;

int GTS(int a[max][max], int n, int start){
	int v;  //Dinh dang xet
	int k;  //Duyet qua n dinh de chon
	int w;  //Dinh duoc tron trong moi buoc
	int mini;   //Chon min cac canh trong moi buoc
	int COST;   //Trong so nho nhat cua chu trinh
	int daxet[max];  //Danh dau cac dinh da di qua
	int TOUR[max];
	
	for(k = 0; k < n; k++){
		daxet[k] = 0;   //Chua dinh nao dc xet den
		
	}
	
	COST = 0;
	
	int i = 0;  //Bien dem, dem du n dinh thi dung
	
	v = start;
	
	TOUR[i] = v;    //Dua dinh v vao chu trinh
	
	daxet[v] = 1;   //Dinh v da duoc xet
	
	
	while(i<n-1){
		mini = 1000000;    //Vo cung
		for(k = 0; k < n; k++)
			if(!daxet[k])
				if(mini > a[v][k]){
					mini = a[v][k];
					w = k;
				}

		v = w;
		i++;
		TOUR[i] = v;
		daxet[v] = 1;
		COST += mini;
		
	}
	COST += a[v][start];
	
	cout<<"TOUR: ";
	for(int i = 0; i < max; i++){
		cout<<TOUR[i]<<" -> ";
	}
	cout<<start<<endl;
	
	return COST;
}

int main(){
	int a[max][max] = {{0,1,2,7,5},{1,0,4,4,3},{2,4,0,1,2},{7,4,1,0,3},{5,3,2,3,0}};

	cout<<"COST: "<<GTS(a, max, 2)<<endl;
}

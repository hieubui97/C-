#include<iostream>
using namespace std;

int m = 25;
int n = 12;

struct canh{
	int d;
	int c;
	int w;
};

void doicho(canh &a, canh &b){
	canh tmp = a;
	a = b;
	b = tmp;
}

void sapxep(canh a[]){
	int i,j;
	for(i = 0; i < m-1; i++)
		for(j = i+1; j < m; j++){
			if(a[i].w > a[j].w)   doicho(a[i], a[j]);
		}
}

void nhap(canh a[]){
	for(int i=0; i< n; i++){
		cout<<"nhap dinh dau, dinh cuoi, va trong so cua dinh thu "<<i+1<<":"<<endl;
		cin>>a[i].d>>a[i].c>>a[i].w;
	}
	
}

void khoitao(int daxet[]){
	for(int i = 0; i < m; i++){
		daxet[i] = 0;
	}
}

void Prim(canh E[], canh T[], int daxet[]){
	int j, k, trongso;
	k = 0;
	T[k] = E[0];
	trongso = E[0].w;
	daxet[E[0].d-1] = 1;
	daxet[E[0].c-1] = 1;
	
	while(k < n-2){
		j = 1;
		while(daxet[E[j].d-1] == daxet[E[j].c-1]) j++;
		k++;
		T[k] = E[j];
		trongso += T[k].w;
		daxet[E[j].d-1] = 1;
		daxet[E[j].c-1] = 1;
	}
}

void incaykhung(canh T[]){
	for(int i = 0; i < n-1; i++){
		cout<<T[i].d<<"  "<<T[i].c<<"  "<<T[i].w<<endl;
	}
}

int main(){
	canh E[m];
	canh T[n-1];
	int daxet[m];
	//nhap(T);
	sapxep(T);
	khoitao(daxet);
	Prim(E,T,daxet);
	incaykhung(T);
}

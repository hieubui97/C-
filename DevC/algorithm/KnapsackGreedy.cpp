#include<iostream>
#include<time.h>


using namespace std;

struct item{
	int w;
	int c;
	double v;
};

void itemValue(item a[], int n){
	for(int i = 0; i < n; i++)
		a[i].v = (double)(a[i].c)/a[i].w;
}

void swap(item &a, item &b){
	item tmp = a;
	a = b;
	b = tmp;
}

void sort1(item a[], int n){
	for(int i = 0; i < n-1; i++)
		for(int j = i+1; j < n; j++)
			if(a[i].c < a[j].c)
				swap(a[i], a[j]);
}

void sort2(item a[], int n){
	for(int i =0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			if(a[j].w < a[i].w) swap(a[i], a[j]);
		}
	}
}

void sort3(item a[], int n){
	for(int i = 0; i < n-1; i++)
		for(int j = i+1; j < n; j++){
			if(a[i].v < a[j].v)
				swap(a[i], a[j]);
		}
}

void Print(item a[], int n){
	cout<<"c: ";
	for(int i = 0; i < n; i++)
		cout<< a[i].c<<"    ";
	cout<<endl;	
	
	cout<<"w: ";
	for(int i = 0; i < n; i++)
		cout<< a[i].w<<"    ";
	cout<<endl;
	
	cout<<"v: ";
	for(int i = 0; i < n; i++)
		cout<< a[i].v<<" ";
	cout<<endl<<endl;		
}

int greedy(item a[], int n, int b){
	itemValue(a, n);
	sort1(a, n);
	sort2(a, n);
	sort3(a, n);
	Print(a,n);
	
	int maxV = 0;
	for(int i = 0; i < n; i++){
		if(a[i].w <= b){
			maxV += a[i].c;
			b -= a[i].w;
		}
	}
	
	return maxV;
}

int main(){
//	int n;
//	int b;
//
//	cout<<"Nhap n = ";
//	cin>>n;
//
//	item a[n];
//	cout<<"Nhap mang a[n]: "<<endl;
//	for(int i = 0; i < n;i++){
//		cout<<"c["<<i<<"] = "; cin>>a[i].c;
//		cout<<"w["<<i<<"] = "; cin>>a[i].w;
//	}
//
//	cout<<greedy(a, n, b);
	
	int b = 30;
	int n = 8;
	item a[n] = {{7,8}, {12,7}, {10,3}, {9,5}, {6,9}, {4,7}, {8,10}, {5,8}};
	
	clock_t start = clock();
	cout<<"Max Value: "<<greedy(a, n, b)<<endl;
	clock_t finish = clock();
	
	double t = double(finish - start)/CLOCKS_PER_SEC;
	
	cout<<"Thoi gian chay thuat toan: "<<t;
}

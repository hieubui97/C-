#include<iostream>

using namespace std;

int Min(int a[], int l, int r){
	if(l == r) return a[l];
	
	int m = (l+r)/2;
	int min1 = Min(a, l, m);
	int min2 = Min(a, m+1, r);
	
	if(min1 < min2) return min1;
	else return min2;
}

void MinMax(int a[], int l, int r, int &Min, int &Max){
	int Min1,Min2,Max1,Max2;
	
	if(l == r){
		Min = a[l];
		Max = a[l];
	}
	else{
		int m = (l+r)/2;
		MinMax(a, l, m, Min1, Max1);
		MinMax(a, m+1, r, Min2, Max2);
		
		if(Min1 < Min2)
			Min = Min1;
		else Min = Min2;
		
		if(Max1 > Max2)
			Max = Max1;
		else Max = Max2;		
	}
}

int main(){
	int a[] = {1, 5, 7 , 10, 4, 7, 9, 6};
	cout<<"Min: "<<Min(a, 0, 7)<<endl;
	
	int Min, Max;
	MinMax(a, 0, 7, Min, Max);
	cout<<Min<<endl<<Max;
}

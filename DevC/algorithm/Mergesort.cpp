#include<iostream>
#define max 11
using namespace std;

void merge(int a[], int l, int m, int r){
	int c[max];
	int i = l;
	int j = m + 1;
	int p = l;
	
	while(i <= m && j <= r){
		if(a[i] < a[j]){
			c[p] = a[i];
			i++;
		}
		else{
			c[p] = a[j];
			j++;
		}
		p++;
	}
	
	while(i <= m){
		c[p] = a[i];
		i++;
		p++;
	}
	
	while(j <= r){
		c[p] = a[j];
		j++;
		p++;
	}
	
	for(int i = l; i <= r; i++)
		a[i] = c[i];
}

void mergesort(int a[], int l, int r){
	int m = (l+r)/2;	
	
	if(l>=r) return;
	else{
		mergesort(a, l, m);
		mergesort(a, m+1, r);
		merge(a, l, m, r);
	}
	
}

int main(){
	int a[max] = {3, 5, 8, 9, 4, 2, 7, 5, 3, 9, 8};
	
	mergesort(a, 0, 10);
	
	for(int i = 0; i < max; i++)
		cout<<a[i]<<" ";
}

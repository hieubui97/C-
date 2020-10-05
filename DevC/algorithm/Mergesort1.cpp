#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<time.h>
#define max 1000000
using namespace std;

void input(){
	int a,i;
	srand(time(NULL));
	fstream f;
	f.open("input.txt");
	for(i=0;i<=max;i++){
		int a=rand();
		f<<a<<endl;
	}
	f.close();
}


void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}

void merge(int a[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
    int L[n1], R[n2]; 
  
    for (i = 0; i < n1; i++) 
        L[i] = a[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = a[m + 1+ j]; 
    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            a[k] = L[i]; 
            i++; 
        } 
        else
        { 
            a[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
    while (i < n1) 
    { 
        a[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    while (j < n2) 
    { 
        a[k] = R[j]; 
        j++; 
        k++; 
    } 
} 

void mergeSort(int a[], int l, int r) 
{ 
    if (l < r) 
    {  
        int m = l+(r-l)/2;
        mergeSort(a, l, m); 
        mergeSort(a, m+1, r); 
        merge(a, l, m, r); 
    } 
} 


int main(){
	input();
	int n=10;
	int *a;
	a=new int[n];
	fstream f;
	f.open("input.txt");
	for(int i=0;i<=n;i++){
		f>>a[i];
	}
	
	mergeSort(a,0,n-1);
	
	for(int i=0;i<=n;i++){
		cout<<a[i]<<" ";
	}

}

#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<time.h>
#define max 100000
using namespace std;

void input(){
	int a,i;
	srand(time(NULL));
	fstream f;
	f.open("input.txt");
	for(i=0;i<=max;i++){
		int a=rand()%100;
		f<<a<<endl;
	}
	f.close();
}


void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}

void quicksort(int a[],int l,int r)
{
     if(l>=r) return ; // ket thuc
     int i=l+1;
     int j=r;
     int x=a[l];
     while(i<=j)
     {
                while((i<=r)&&(a[i]<x)) i++;
                while((j>=l)&&(a[j]>=x)) j--;
                if(i<j)
                {
                        swap(a[i],a[j]);
						i++;j--;
                }
				
     }
     swap(a[l],a[j]);
     quicksort(a,l,j-1);
     quicksort(a,j+1,r);
     
}


int main(){
	//input();
	int a[10]={2,1,4,6,8,7,5,10,15,2};

//	fstream f;
//	f.open("input.txt");
//	for(int i=0;i<n;i++){
//		f>>a[i];
//	}

	quicksort(a,0,9);
	
	for(int i=0;i<10;i++){
		cout<<a[i]<<" ";
	}
	

}

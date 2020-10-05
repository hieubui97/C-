#include<iostream>
#include<math.h>

using namespace std;

int l = -1, r = -1;
// Max cua mang ben trai
int MLV(int a[], int i, int j){
	int max =  a[j];
	int sum = a[j];
	for(int k = j-1; k>=i; k--){
		sum += a[k];
		if(sum > max){		
			max = sum;
			l = k;
		} 
	}
	return max;
}

// Max cua mang ben phai
int MRV(int a[], int i, int j){
	int max =  a[i];
	int sum = a[i];
	for(int k = i+1; k<=j; k++){
		sum += a[k];
		if(sum > max){
			max = sum;
			r =  k;
		} 
	}
	return max;
}

// MaxSubVector
int MS(int a[], int i, int j){
	int m, wl, wr, wm, max1;

	if(i==j) return a[i];
	
	else{
		m = (i+j)/2;
		wl = MS(a, i, m);
		wr = MS(a, m+1, j);
		wm = MLV(a, i, m) + MRV(a, m+1, j);
	}
	
	max1 = (max(wm, max(wl,wr)));
	
//	l1 = i;
//	r1 = m;
//	l2 = m+1;
//	r2 = j;
	
//	if(max1 == wm){
//		cout<<l<<r;
//	}
//	else if(max1 == wr){
//		cout<<i<<m;
//	}
//	else cout<<m+1<<j;
	
	return max1;	
}

int main(){
	int a[] = {3,-5,8,-9,4,-2,7};
	cout<<MS(a, 0, 6)<<endl;
	cout <<l<<r;
}

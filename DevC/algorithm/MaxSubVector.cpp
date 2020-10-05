#include<iostream>
#include<math.h>

using namespace std;

// Max cua mang ben trai
int MLV(int a[], int i, int j){
	int max1 =  a[j];
	int sum = a[j];
	for(int k = j-1; k>=i; k--){
		sum += a[k];
		if(sum>max1) max1 = sum;
	}
	return max1;
}

// Max cua mang ben phai
int MRV(int a[], int i, int j){
	int max1 =  a[i];
	int sum = a[i];
	for(int k = i+1; k<=j; k++){
		sum += a[k];
		if(sum>max1) max1 = sum;
	}
	return max1;
}

// MaxSubVector
int MS(int a[], int i, int j){
	int m, wl, wr, wm;

	if(i==j) return a[i];
	
	else{
		m = (i+j)/2;
		wl = MS(a, i, m);
		wr = MS(a, m+1, j);
		wm = MLV(a, i, m) + MRV(a, m+1, j);
	}
	return (max(wm, max(wl,wr)));
}

// Tiep can truc tiep - O(n^3)
int BruteForceNaice(int a[], int n){
	int Max = -1000;
	for(int i = 0; i < n; i++){				// i la diem bat dau cua day con
		for(int j = i; j <=n; j++){			// j la diem ket thuc cua day con
			int s = 0;
			for(int k = i; k <=j; k++){		// Tinh trong luong cua day
				s += a[k];
				if(s > Max) Max = s;
			}
		}
	}
	
	return Max;
}


int main(){
	int a[] = {3,-5,8,-9,4,-2,7};
	cout<<MS(a, 0, 6)<<endl;
	cout<<BruteForceNaice(a,7);
}

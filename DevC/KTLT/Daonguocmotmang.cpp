#include<stdio.h>

int *a,n,i,t;

void daonguocmang(int a[],int n){
	for(i=0;i<n/2;i++){
		t=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=t;
	}
}

int main(){
	int*a,n,i;
	printf("nhap n:");scanf("%d",&n);				//input
	a=new int[n];
	printf("nhap mang a co n phan tu:\n");			
	for(i=0;i<n;i++){
		printf("a[%d]=",i);scanf("%d",&a[i]);
	}
	daonguocmang(a,n);
	printf("mang dao nguoc la: ");						//output
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	delete a;
}

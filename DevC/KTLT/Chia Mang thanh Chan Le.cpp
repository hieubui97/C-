#include<stdio.h>
#include<conio.h>


void Nhap(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("nhap phan tu thu %d :",i);scanf("%d",&a[i]);
	}
}

int main(){
	int *a,*b,*c;
	int n,i,j=0,k=0;
	printf("nhap n:");scanf("%d",&n);
	a=new int[n];
	b=new int[n];
	c=new int[n];
	Nhap(a,n);
	// Chia Mang Chan Le
	for(i=0;i<n;i++){
		if(a[i]%2==0) b[j++]=a[i];
		else c[k++]=a[i];
	}
	printf("mang chan la: ");
	for(i=0;i<j;i++) printf("%d ",b[i]);
	printf("\nmang le la: ");
	for(i=0;i<k;i++) printf("%d ",c[i]);
	delete a;delete b;delete c;
}

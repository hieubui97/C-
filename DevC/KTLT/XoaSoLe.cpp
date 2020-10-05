#include<stdio.h>
#include<conio.h>

void Nhap(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("nhap phan tu thu %d :",i);scanf("%d",&a[i]);
	}
}

void Xuat(int a[],int n){
	int i;
	for(i=0;i<n;i++) printf("%d ",a[i]);
}

void XoaSoLe(int a[],int *n){
	int j = 0;
	for (int i = 0; i<*n; i++)
		if (a[i] % 2 == 0)
			a[j++] = a[i];
	*n = j;
}
int main(){
	int *a;
	int n,i;
	printf("nhap n: ");scanf("%d",&n);
	a=new int[n];
	Nhap(a,n);
	XoaSoLe(a,&n);
	printf("mang da xoa so le: ");
	Xuat(a,n);
	delete a;
}

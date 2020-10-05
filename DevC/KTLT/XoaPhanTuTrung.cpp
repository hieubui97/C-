#include<stdio.h>
#include<conio.h>

void InPut(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("nhap phan tu thu %d :",i);scanf("%d",&a[i]);
	}
}

void OutPut(int a[],int n){
	int i;
	for(i=0;i<n;i++) printf("%d ",a[i]);
}

void SapXep(int a[],int n){
	int i,j,t;
	for(i=0;i<n;i++){
		for(j=n-1;j>i;j--){
			if(a[j]<a[j-1]){
				t=a[j];
				a[j]=a[j-1];
				a[j-1]=t;
			}
		}
	}
}

void XoaTrung(int a[],int*n){
   int i,j,k;
   for (i=0;i<*n-1;i++){
    j=i+1;
    while (j<*n)
      if (a[i]==a[j]){
         for (k=j;k<*n-1;k++) a[k]=a[k+1];
         *n=*n-1;
      }
	  else j=j+1;
   }
}

int main(){
	int *a;
	int n,i;
	printf("nhap n:");scanf("%d",&n);
	a=new int[n];
	InPut(a,n);
	SapXep(a,n);
	printf("mang sap xep tang dan :");
	OutPut(a,n);
	XoaTrung(a,&n);
	printf("\nmang xoa phan tu trung :");
	OutPut(a,n);
	delete a;
}

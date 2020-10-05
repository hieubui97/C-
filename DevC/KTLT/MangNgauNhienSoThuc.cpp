#include<stdio.h>
#include<stdlib.h>

void Random(float *a,int n)
{
   for(int i = 0; i < n; i++)
    a[i] =(float)rand()/n;
}

int main(){
	float *a;
	int n,i;
	printf("nhap n: ");scanf("%d",&n);
	a=new float[n];
	Random(a,n);
	printf("mang a ngau nhien %d phan tu: ",n);
	for(i=0;i<n;i++) printf("%.2f ",a[i]);
	delete a;
}

#include<stdio.h>
#include<string.h>
#include<conio.h>
void doicho(int &a,int &b)
{
	int c;
	c=a;a=b;b=c;
}
int main()
{	//khoi tao mang
	int m,n,p,*a,*b,*c;
	printf("Nhap so phan tu cua mang a va b: ");
	scanf("%d%d",&m,&n);
	a= new int (m*sizeof(int)); b= new int(n*sizeof(int)); c=new int((m+n)*sizeof(int));
	//nhap mang
	printf("Nhap mang a: \n");
	for (int i=0;i<m;i++)
	{
		printf("a[%d]=",i+1);
		scanf("%d",&a[i]);
	}
	printf("Nhap mang b: \n");
	for (int i=0;i<n;i++)
	{
		printf("b[%d]=",i+1);
		scanf("%d",&b[i]);
	}
		//sap xep theo thu tu tang dan
	 for (int i=0; i<m;i++)
	for(int j=i;j<m;j++)
	if (a[i]>a[j]) doicho(a[i],a[j]);
	printf("Mang a sau sap xep la: ");
	for (int i=0; i<m;i++)
	printf("%d ",a[i]); 
	//ghep 2 mang
	memcpy(c,a,(m*sizeof(int)));
	memcpy(c+m,b,(n*sizeof(int)));
	printf("\nGhep cua 2 mang a va b la: ");
	for (int i=0;i<m+n;i++)
	printf("%d ",c[i]);
	delete a; delete b; delete c;
	getch();
	
	
}

#include<conio.h>
#include<stdio.h>
#include<string.h>
void nhap(float **a,int &m,int &n)
{	
	for(int i=0; i<m;i++)
	 for (int j=0;j<n;j++) 
	  {printf("[%d][%d]= ",i+1,j+1);
	   scanf("%f",&a[i][j]);
	  }
}
void in(float **a,int m, int n)
{
	for(int i=0; i<m;i++)
	 {
	 for (int j=0;j<n;j++) 
	  printf("%.2f\t",a[i][j]);
	 printf("\n"); 
	}	  
}
int main()
{
	int m,n,p,q; 
	float **a,**b,**c;
	printf("Nhap so dong va cot cua ma tran thu 1 : ");
	 scanf("%d%d",&m,&n);
	printf("Nhap so dong va cot cua ma tran thu 2 : ");
	 scanf("%d%d",&p,&q);
// cap phat bo nho cho mang: a,b,c;
a= new float* [m] ;
float* a1 = new float[m*n];
	for( int i = 0 ; i < m ; i++ )
		a[i] = a1+i*n;
b= new float* [p] ;
float* b1 = new float[p*q];
	for( int i = 0 ; i < p ; i++ )
		b[i] = b1+i*q;
c= new float* [m] ;
float* c1 = new float[m*q];
	for( int i = 0 ; i < m ; i++ )
		c[i] = c1+i*q;
// Nhap mang
printf("Nhap cac phan tu cua ma tran 1\n");
	nhap(a,m,n);
printf("Nhap cac phan tu cua ma tran 2\n");
	nhap(b,p,q);
printf("ma tran 1: \n");	
	in(a,m,n);
printf("ma tran 2: \n");	
	in(b,p,q);
// Nhan hai ma tran
if(n!=p) 
  printf ("Hai ma tran vua nhap khong nhan duoc voi nhau.");  
else
{
 for (int i=0;i<m;i++)
 for (int j=0;j<q;j++)
  {
  c[i][j]=0;	
  for (int k=0;k<n;k++)
  	c[i][j]=c[i][j]+a[i][k]*b[k][j];
  }
// In Tich 2 ma tran  
  printf("Tich cua hai ma tran vua nhap la:");
 for (int i=0;i<m;i++)
  {
  	printf("\n");
    for (int j=0;j<q;j++)
    printf("%.2f\t",c[i][j]);
  }
}
delete []a; delete []b; delete []c;
getch();
}

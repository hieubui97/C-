#include<conio.h>
#include<stdio.h>
#include<string.h>
#define max 69
void nhap(float a[max][max],int &m,int &n)
{	
	for(int i=0; i<m;i++)
	 for (int j=0;j<n;j++) 
	  {printf("[%d][%d]= ",i+1,j+1);
	   scanf("%f",&a[i][j]);
	  }
}
void inn(float a[max][max],int m, int n)
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
	float a[max][max],b[max][max],c[max][max],d[max][max];
	printf("Nhap so dong va cot cua ma tran thu 1 : ");
	 scanf("%d%d",&m,&n);
	printf("Nhap so dong va cot cua ma tran thu 2 : ");
	 scanf("%d%d",&p,&q);
printf("Nhap cac phan tu cua ma tran 1\n");
	nhap(a,m,n);
printf("Nhap cac phan tu cua ma tran 2\n");
	nhap(b,p,q);
printf("ma tran 1: \n");	
	inn(a,m,n);
printf("ma tran 2: \n");	
	inn(b,p,q);
if((m==p)&&(n==q))
{
 printf("Tong cua hai ma tran la:\n")	;
 for (int i=0;i<m;i++)
  {
  for (int j=0;j<n;j++)
   {
   d[i][j]=a[i][j]+b[i][j];
  printf("%.2f\t",d[i][j]);
   }
  printf("\n");
  }
}
else printf ("Khong the cong 2 ma tran vua nhap\n");
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
getch();
}

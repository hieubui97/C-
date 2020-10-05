#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int timvitri(int a[],int n, int x)
{
	for (int i=1;i<n;i++)
	{
		if(x>=a[i-1]&&x<=a[i])	return (i);
	}
}
void nhap_luutru(int a[],int n)
{	
	int x;
	for(int i=0;i<n;i++)
	{
		printf("Nhap lan thu %d: ",i+1); scanf("%d",&x);
		if(i==0) a[0]=x;
		else
		{
			if(x<a[0]) 
			{
				memmove(a+1,a,i*sizeof(int));
				a[0]=x;
			}
			else if(x>a[i-1]) a[i]=x;
			else if(x>= a[timvitri(a,i,x)-1]&&x<=a[timvitri(a,i,x)])
			{	
				int k=timvitri(a,i,x);
				memmove(a+k+1,a+k,(i-k)*sizeof(int));
				a[k]=x;
			}
		}
	}
}
int main()
{
	int n;
	printf("Nhap so phan tu trong day: "); scanf("%d",&n);
	int *a=(int*)malloc(n*sizeof(int));
	nhap_luutru(a,n);
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}


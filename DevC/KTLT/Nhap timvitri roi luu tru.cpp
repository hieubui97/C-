#include<stdio.h>
#include<conio.h>
#include<string.h>

int timvitri(int a[],int n,int x)
{
	for(int i=1;i<n;i++)
	{
		if(x>=a[i-1]&&x<=a[i])	return(i);
	}
}
void nhapluutru(int a[],int n)
{	
	int x;
	for(int i=0;i<n;i++)
	{
		printf("Nhap lan thu %d: ",i+1); scanf("%d",&x);
		int k=timvitri(a,i,x);
		if(i==0) a[0]=x;
		else
		
			if(x<a[0]) {
				memmove(a+1,a,i*sizeof(int));
				a[0]=x;
			}
			else if(x>a[i-1]) a[i]=x;
			else if(x>=a[k-1]&&x<=a[k])
			{	
				memmove(a+k+1,a+k,(i-k)*sizeof(int));
				a[k]=x;
			}
		
	}
	
}
int main()
{	
	int*a;
	int n;
	printf("Nhap so phan tu trong day: "); scanf("%d",&n);
	a=new int[n];
	nhapluutru(a,n);
	printf("mang tang dan: ");
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	getch();
}


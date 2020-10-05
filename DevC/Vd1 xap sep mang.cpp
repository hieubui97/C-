#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
	{   int n,i,tang;
		int *a;
		printf("n=");
		scanf("%d",&n);
		a=new int[n];
		printf("nhap n phan tu mang a:\n");
		for(i=0;i<n;i++){
		
		scanf("%d",&a[i]);
	}
		printf("mang a la:\n");
		for(i=0;i<n;i++)
		printf("a[%d]=%d\n",i,a[i]);
		
		for(i=0;i<n;i++)
			for(int j=i+1;j<n;j++)
		
			if( a[i]>a[j])
			{ 
			  tang=a[i];
			  a[i]=a[j];
			  a[j]=tang;
		
			}
		printf("mang a xap sep tang dan la:\n")	;
		for(i=0;i<n;i++)	
		printf("a[%d]=%d\n",i,a[i]);
		
		
		delete a;
		
	}

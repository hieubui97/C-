#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
	{   int m,n;
		int *a,*b,*c;
		printf("nhap n:");
		scanf("%d",&n);
		printf("nhap m:");
		scanf("%d",&m);
		
		a=new int[n];
		printf("nhap n phan tu mang a :\n");
		for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
		
		b=new int[m]; 
		printf("nhap m phan tu mang b:\n")	;
		for (int i=0;i<m; i++)
		scanf("%d",&b[i]);
	
		c=new int[m+n];
		memcpy(c,a,n*sizeof(int));
		memcpy(&c[n],b,m*sizeof(int));
		printf("mang c la:\n");
		for(int i=0;i<m+n;i++)
		printf("c[%d]=%d\n",i,c[i]);
		
		delete a;
		delete b;
		delete c;
		getch ();
		return 0;
		
	}

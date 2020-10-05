#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
	{   int m,n,i;
		int *a,*b;
		printf("nhap n:");
		scanf("%d",&n);
		printf("nhap m:");
		scanf("%d",&m);
		a=new int[m+n];
		printf("nhap n phan tu mang a:\n");
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
		b=new int[m];
		printf("nhap m phan tu mang b:\n");
		for(i=0;i<m;i++)
		scanf("%d",&b[i]);
		
		memmove(a+m,a,n*sizeof(int));
		memcpy(a,b,m*sizeof(int));
		printf("mang c la:\n");
		for(i=0;i<m+n;i++) 
		printf("a[%d]=%d\n",i,a[i]);
		delete a;
		delete b;
		getch ();
		return 0;
		
	}

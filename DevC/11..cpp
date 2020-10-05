#include<stdio.h>
main()
{
	int n ;
	printf("nhap gia tri cua n :\nn = ");scanf("%d",&n);
	int t, tong = 0;
	
	//tinh tong cac chu so
	while(n/10!=0)
	{ 
	t = n%10;
	n = n/10;
	tong = tong + t;
	printf("%d ", t);
	}

	printf("tong cua cac chu so la: %d ", tong);
}

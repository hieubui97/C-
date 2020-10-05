#include<stdio.h>
#include<math.h>
main()
{
	int m,n ;
	do
	{
		printf("m = ");scanf("%d",&m);
		printf("n = ");scanf("%d",&n);
	}
	while(m<0||m>=n||n<=0);
	int dem = 0 ;
	int i ;
	for(i=m;i<=n;i++)
	{
		int j = 2  ;
		while(i%j!=0&&j<=sqrt(i))j++;
		if(j>sqrt(i)){printf("%d\n",i);dem++;
		}
	}
	printf("\nSo so nguyen to tu %d den %d la %d",m,n,dem);
}

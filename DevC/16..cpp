	#include<stdio.h>
main()
{
	int n ;
	printf("nhap n :\n n = ");scanf("%d",&n)	;
	int i;
	 for(i=1;i<=n;i++){
		int j;
		for(j=1;j<=n;j++)
		printf("%-10d",(i-1)*n+j);
		printf("\n");
	}
}

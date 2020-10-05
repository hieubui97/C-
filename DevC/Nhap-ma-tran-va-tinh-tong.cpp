#include<stdio.h>  
#include<conio.h>  

main()  
{  
int a[10][10],b[10][10],c[10][10],m,n,i,j,k; 
printf("nhap m,n:\n");
scanf("%d%d",&m,&n);
printf("\nnhap matran A[m.n]:\n");
for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	scanf("%d",&a[i][j]);
printf("\nmatran A[m.n] la:\n")	;
for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	printf("%d\t",a[i][j]);
	printf("\n");	
}
printf("\nnhap matran B[m.n]:\n");
for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	scanf("%d",&b[i][j]);
printf("\nmatran B[m.n] la:\n")	;
for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	printf("%d\t",b[i][j]);
	printf("\n");	
}	

for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	c[i][j]=a[i][j]+b[i][j];
printf("\ntong hai matran A[m.n] va B[m.n] la:\n");
	
for(i=0;i<m;i++)
{
		for(j=0;j<n;j++)
	printf("%d\t",c[i][j]);
	printf("\n");
}


}

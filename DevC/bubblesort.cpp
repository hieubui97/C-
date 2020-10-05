#include <stdio.h>
#include<string.h>
int main()
{
int i,j,n,tg;
int*x;
printf("nhap n: ");
scanf("%d",&n);
x = new int[n];
printf("nhap mang x:\n");
for(i=0;i<n;i++)
{ 
printf("x[%d] = ",i);
scanf("%d",&x[i]);
}
for(i=0;i<n;i++){
	for(j=n-1;j>i;j--){
		if(x[j]<x[j-1]){
			tg=x[j];
			x[j]=x[j-1];
			x[j-1]=tg;
		}
	}
}
for(i=0;i<n;i++)
printf("%d ",x[i]);
}

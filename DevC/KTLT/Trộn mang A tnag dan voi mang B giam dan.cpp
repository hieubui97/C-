#include<stdio.h>
#include<string.h>

int main(){
	int n=10,m=7;
	int a[n]={1,3,4,6,7,9,12,15,17,19};
	int b[m]={11,10,9,8,7,5,2};
	int c[m+n];
	int i,j,k;
	i=k=0; j=m-1;
	while(i<n&&j>=0)
	{
		if(a[i]<=b[j]) 
		{
			c[k++]=a[i++];
		}
		else
		{
			c[k++]=b[j--];
		}
	}
	if(j>=0) memmove(c+k,b,(j+1)*sizeof(int));
	if(i<n) memmove(c+k,a+i,(n-i)*sizeof(int));
	printf("ket qua: ");
	for(int i=0;i<m+n;i++) 
	{
	printf("%d ",c[i]);
	}
	
}

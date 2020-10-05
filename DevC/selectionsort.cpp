#include <stdio.h>

int main()
{
int i,io,j,n,min,temp;
int*x;
printf("nhap n: ");scanf("%d",&n);
x = new int[n];
printf("nhap mang x:\n");
for(i=0;i<n;i++)
{ 
printf("x[%d] = ",i);scanf("%d",&x[i]);
}
for(i=0;i<n-1;i++)
{
	min=x[i];
	io=i;
	for(j=i+1;j<n;j++){
		if(x[j]<min){
		min=x[j];
		io=j;
		}
	}
	if(io!=i){
		temp=x[io];
		x[io]=x[i];
		x[i]=temp;
	}
	
}


for(i=0;i<n;i++)
printf("%d ",x[i]);

}

#include <stdio.h>
#include<string.h>
int main()
{
int i,k,n,tg;
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
for(i=1;i<n;i++){
	tg=x[i];
	k=0;
	while(k<i&&x[k]<tg)
	k=k+1;
	if(k!=i){
		memmove(&x[k+1],&x[k],(i-k)*sizeof(x[i]));
		x[k]=tg;
	}
}
for(i=0;i<n;i++)
printf("%d ",x[i]);
}

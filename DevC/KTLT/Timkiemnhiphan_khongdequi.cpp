#include<stdio.h>
#include<conio.h>

int timkiemnhiphan(int a[],int n,int x)
{
int t, p, g;
t = 0;
p = n-1;
while (t <= p)
{
g = (t + p)/2;
if (x < a[g]) p = g - 1;
else if (x > a[g]) t = g + 1;
else return(g);
}
return(n); 			//khong tim thay x
}
int main(){
	int *a,n,x,i,j,tam;
	printf("nhap n:");scanf("%d",&n);				//input
	a=new int[n];
	printf("nhap mang a:\n");
	for(i=0;i<n;i++){
		printf("a[%d]=",i);scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){								//sap xep bubble
		for(j=n-1;j>i;j--)
		if(a[j]<a[j-1]){
			tam=a[j];
			a[j]=a[j-1];
			a[j-1]=tam;
		}
	}
	printf("day sap xep tang dan la:");
	for(i=0;i<n;i++) printf("%d ",a[i]);
	printf("\nnhap x:");scanf("%d",&x);
	int z=timkiemnhiphan(a,n,x);						//tim vitri
	if(z<n) printf("vi tri cua %d la: a[%d]",x,z);		//output
	else printf("khong tim thay x trong day");
	delete a;
}

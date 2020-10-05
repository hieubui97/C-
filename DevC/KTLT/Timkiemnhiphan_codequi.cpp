#include<stdio.h>
#include<conio.h>
// t=trai; p=phai; g=giua;
int timkiemnhiphan(int a[],int t,int p,int x)
{
 int g;
 if(t>p) return(-1);
 g=(t+p)/2;
 if(a[g]==x) return(g);
 if(x<a[g]) return timkiemnhiphan(a,t,g-1,x);
 return timkiemnhiphan(a,g+1,p,x);

}
int main(){
	int *a,n,x,i,j,tam;
	printf("nhap n:");scanf("%d",&n);   //input
	a=new int[n];
	printf("nhap mang a:\n");
	for(i=0;i<n;i++){					//nhap mang
			printf("a[%d]=",i);scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){            //sapxep bubblesort
		for(j=n-1;j>i;j--)
		if(a[j]<a[j-1]){
			tam=a[j];
			a[j]=a[j-1];
			a[j-1]=tam;
		}
	}
	printf("day sap xep tang dan la:");
	for(i=0;i<n;i++) printf("%d ",a[i]); 		//in day tang dan
	printf("\nnhap x:");scanf("%d",&x);
	int z=timkiemnhiphan(a,0,n-1,x);
	if(z==-1) printf("khong tim thay x trong day");		//output
	else printf("vi tri cua %d la: a[%d]",x,z);
	delete a;
}

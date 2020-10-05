#include<stdio.h>

int main(){
	int n,i,j,tag;
	int*x;
	printf("nhap n:");scanf("%d",&n);
	x=new int[n];
	printf("nhap mang x:\n");
	for(i=0;i<n;i++){				// nhap mang
		printf("x[%d]=",i);scanf("%d",&x[i]);
	}
	for(i=1;i<n;i++){				//insertionsort
		tag=x[i];
		j=i-1;
		while(j>=0&&x[j]>tag) {
			x[j+1]=x[j];
			j--;
		}
		x[j+1]=tag;
	}
	printf("mang sap xep tang dan la : ");
	for(i=0;i<n;i++)	printf("%d ",x[i]); //in mang da xs
	delete x;
}

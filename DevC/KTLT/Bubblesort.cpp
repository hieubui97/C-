#include<stdio.h>

int main(){
	int*x;
	int n,i,j,tam;
	printf("nhap n:");scanf("%d",&n);				//input
	x=new int[n];
	printf("nhap mang x:\n");
	for(i=0;i<n;i++){
		printf("x[%d]=",i);scanf("%d",&x[i]);
	}
	for(i=0;i<n-1;i++){							//bubblesort
		for(j=n-1;j>i;j--){
			if(x[j]<x[j-1]){
				tam=x[j];
				x[j]=x[j-1];
				x[j-1]=tam;
			}
		}
	} 
	printf("mang sap xep tang dan la: ");		
	for(i=0;i<n;i++) printf("%d ",x[i]);		//output
	delete x;
}

#include<stdio.h>

int main(){
	int io,i,j,n,min,tam;
	int *x;
	printf("nhap n:");scanf("%d",&n);           //input
	x=new int[n];
	printf("nhap mang X:\n");					
	for(i=0;i<n;i++){							
		printf("x[%d]=",i);scanf("%d",&x[i]);
	}
	for(i=0;i<n-1;i++){						//selectionsort
		io=i;
		min=x[i];
		for(j=i+1;j<n;j++){
			if(x[j]<min){
				min=x[j];
				io=j;
			}
		}
		if(io!=i){
			tam=x[io];
			x[io]=x[i];
			x[i]=tam;
		}
	}
	printf("mang sap xep tang dan la: ");
	for(i=0;i<n;i++)printf("%d ",x[i]);     //output
	delete x;
}

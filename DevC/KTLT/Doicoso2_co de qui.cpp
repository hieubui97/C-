#include<stdio.h>
#include<conio.h>
#define max 25

void doicoso2(int n,int a[],int &i){
	if(n==0) {
		a[i]=0;
		return;
	}
	else if(n==1){
		a[i]=1;
		return;
	}
		else a[i]=n%2;
			 i++;
		return(doicoso2(n/2,a,i));
}
int main(){
	int n,a[max],i=0;
	do{
	printf("nhap so thap phan n: ");scanf("%d",&n);   		 //input
	}while(n<0);
	doicoso2(n,a,i);
	printf("dang nhi phan cua %d la:",n);					//output
	for(int j=i;j>=0;j--) printf("%d",a[j]);
	
}

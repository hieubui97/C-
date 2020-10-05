#include<stdio.h>  
#include<conio.h>  
#include<math.h>

int doicoso2(int n){
	int i=0,kq=0;
	while(n!=0){
		kq+=n%2*pow(10,i);
		n=n/2;
		i++;
		
	}
	return;
}
int main(){
	int n;
	do{
	printf("nhap so thap phan n:");scanf("%d",&n);
	  }while(n<0);
	printf("dang nhi phan cua %d la:%d",n,doicoso2(n));
}

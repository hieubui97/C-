#include<stdio.h>  
#include<conio.h>  
#define max 20

int main()  
{  
int a[max],n,i,j;   
do{
printf("Nhap mot so bat ky: ");  scanf("%d",&n);			//input
}while(n<0);
for(i=0;n>0;i++)  				//doicoso
{  
a[i]=n%2;  
n=n/2;  
}  
printf("Dang nhi phan cua so vua nhap la : ");  
for(j=i-1;j>=0;j--)  		//output
{  
printf("%d",a[j]);  
}  

getch();  
}  

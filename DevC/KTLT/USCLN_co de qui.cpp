#include<stdio.h>

int USCLN(int a,int b){					//tim ucln
	if(a==b) return (a);
	else if(a>b) return(USCLN(a-b,b));
		 else return(USCLN(a,b-a));
}
int main(){
	int a,b;
	printf("nhap a: ");scanf("%d",&a);
	printf("nhap b: ");scanf("%d",&b);
	printf("USCLN cua a va b: %d",USCLN(a,b));
}

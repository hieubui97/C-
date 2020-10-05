#include<stdio.h>

int main() {
   int a, b, i, uscln;
	printf("nhap a:");scanf("%d",&a);			
	printf("nhap b:");scanf("%d",&b);
   for(i = 1; i <= a || i<=b ; i++) {			//tim ucln
   if( a%i == 0 && b%i == 0 )
      uscln = i;
   }

   printf("USCLN cua a va b = %d", uscln);
   
   
}

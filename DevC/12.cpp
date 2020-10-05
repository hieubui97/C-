#include<stdio.h>
main(){
	int n , t ;
	printf("nhap n :\nn = "); scanf("%d", &n);
	if(n<0){
	printf("ERROR");
	}
	else{
	printf("so dao nguoc la : ");
	while(n%10!=0){
		t = n % 10 ;
		n = n / 10 ;
		printf("%d", t);	
	}
}
}

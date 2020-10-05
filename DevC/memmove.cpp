#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
	int a[8]={5,0,3,2,7};
	int b[3]={1,6,1};
	memmove(a+3,a,5*sizeof(int));
	memcpy(a,b,3*sizeof(int));
	printf("Ket qua cuoi cung la: \n");
	for (int i=0; i<8;i++)
	printf("%d ",a[i]);
	getch();
}

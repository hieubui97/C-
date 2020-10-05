//#include<stdio.h>
//main()
//{
//	int n ;
//	float t =1 ;
//	printf("nhap gia tri cua n :\n n = ");scanf("%d",&n);
//	float tong = 0 ;
//	for(int i=1; i<=n; i++)
//	{
//		t = (1/((1/t)*i));
//		tong = tong + t ;
//	}
//	printf("gia tri cua Tong la %f", tong );
//}

#include <iostream>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int dtb;
	cout<<"Nhap diem trung binh: ";
	cin>>dtb;
	if(dtb<=0 || dtb>10)
	{
		cout<<"Lam gi co diem trung binh nhu may nhap Really ??"<<endl;
	}
	else
	{
		if(dtb>=5)
		{
			cout<<"Qua mon roi :))";
		}
		else
		{
			cout<<"Hoc ngu the :))";
		}
	}
	
	return 0;
}

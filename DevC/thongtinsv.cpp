#include <stdio.h>
#include <conio.h>
#include <iostream>
#include<string.h>
using namespace std;
struct sinhvien
{
	char ten[30];
	int namsinh;
	float diem;
};
int main()
{	
	int n; char s[100];
	puts("Nhap vao so sinh vien can nhap: ");
	scanf("%d",&n);
	sinhvien sv[n], sv1[n];
	fflush(stdin);	
for (int i=0;i<n;i++)
	{printf("Sinh vien thu %d\n",i+1);
	 printf(" ten: "); gets(sv[i].ten);fflush(stdin);
	 printf(" nam sinh: "); scanf("%d",&sv[i].namsinh);
	 printf(" diem: "); scanf("%f",&sv[i].diem);
	 fflush(stdin);
	} 
	
 FILE *ghi, *doc;
 //ghi file
ghi=fopen("sinhvien.dat","w");
fwrite(&sv,sizeof(sv),1,ghi);
fclose(ghi);
//doc file va xuat
doc=fopen("sinhvien.dat","rb");
fread(&sv1,sizeof(sv1),1,doc);
fclose(doc);
for (int i=0;i<n;i++)
{
	cout<<sv1[i].ten<<"\t"<<sv1[i].namsinh<<"\t"<<sv1[i].diem<<"\n";
}
}

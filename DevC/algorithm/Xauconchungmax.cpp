#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
void TaoBang(int table[500][500], char str1[], char str2[]){
	int leng1 = strlen(str1);
	int leng2 = strlen(str2);
	for(int i=-1;i<leng1;i++)
	{
		for(int j=-1;j<leng2;j++)
		{
			if(i==-1||j==-1)
			{
				table[i+1][j+1]=0;
				continue;
			}
			if(str1[i]==str2[j])
			{
				table[i+1][j+1]=table[i][j]+1;
			}
			else
			{
				table[i+1][j+1] = (table[i][j+1]>table[i+1][j]) ? table[i][j+1]:table[i+1][j];
			}
		}
	}
}
void XuatBang(int tabble[500][500],char str1[],char str2[])
{
	cout<<endl;
	for(int i =0; i<=strlen(str1); i++)
	{
		for(int j= 0; j<=strlen(str2);j++)
		{
			cout<< tabble[i][j]<<"\t";
		}
		cout<<endl;
	}
}
void TruyVet(int table[500][500], char str1[], char str2[])
{
	for(int i = strlen(str1);i>0;)
	{
		for(int j = strlen(str2);j>0;)
		{
			if(str1[i-1]==str2[j-1]&& table[i-1][j-1]==table[i][j-1]&&table[i-1][j-1]==table[i-1][j])
			{
				char temp;
				temp = str1[i-1];
				cout<< temp<<"\t";
				
			}
			if(table[i-1][j-1]>= table[i][j-1]&& table[i-1][j-1]>= table[i-1][j])
			{
				i--;
				j--;
			}
			else if(table[i][j-1] > table[i-1][j])
			{
				j--;
			}
			else
			{
				i--;
			}
			if(table[i][j]==0)
			return;
		}
	}
}

int main(){
	char str1[500];
	char str2[500];
	cout<< "Hay nhap str1: "; fflush(stdin); cin>>str1;
	cout<<"Hay nhap str2: "; fflush(stdin); cin>>str2;
	cout<<str1<<str2;
	int table[500][500];
	
	TaoBang(table,str1,str2);
	cout<<"Bang truong hop: "<<endl;
	XuatBang(table,str1,str2);
	
	cout<< "vay do dai chuoi con chung dai nhat la: "<<table[strlen(str1)][strlen(str2)]<<endl;
	cout<<"truy vet: ";
	TruyVet(table,str1,str2);
	getch();
	return 0;
}

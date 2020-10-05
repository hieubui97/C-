#include<stdio.h>
#include<vector>
#include<string.h>
#include<iostream>
using namespace std;
struct sinhvien
{
	char masv[8],hoten[20],quequan[20],ngaysinh[10],lop[4];
};
struct svTree
{			
	sinhvien *data;
	int khoa;
	char lop[4];
	std::vector<svTree*> children;
};
void main(){
	svTree*hv=new svTree();
	
}

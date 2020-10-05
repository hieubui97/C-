#include<iostream>
#include<math.h>
using namespace std;
/*
int A[9][9] = 
{
	{5,3,0,0,7,0,0,0,0},  
	{6,0,0,1,9,5,0,0,0},
	{0,9,8,0,0,0,0,6,0},
	{8,0,0,0,6,0,0,0,3},
	{4,0,0,8,0,3,0,0,1},
	{7,0,0,0,2,0,0,0,6},
	{0,6,0,0,0,0,2,8,0},
	{0,0,0,4,1,9,0,0,5},
	{0,0,0,0,8,0,0,7,9}
};
*/

int A[9][9] = 
{
{0,1,0,0,0,0,8,7,0},
{0,0,0,0,4,1,6,0,3},  
{0,0,0,7,0,0,0,0,0},  
{0,0,0,0,8,5,0,0,0},  
{1,3,0,4,0,9,0,5,8},  
{0,0,0,1,6,0,0,0,0},  
{0,0,0,0,0,6,0,0,0},  
{4,0,2,5,1,0,0,0,0},
{0,8,9,0,0,0,0,3,0} 
};


bool checkcot(int c,int x)
{
	int i;
	for(i=0;i<9;i++)
	if(A[i][c]==x) return false;
	return true;
}
bool checkhang(int h,int x)
{
	int i;
	for(i=0;i<9;i++)
	if(A[h][i]==x) return false;
	return true;
}
bool checkvung(int h,int c,int x)
{
int h1=h/3*3,c1=c/3*3,i,j;
	
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	if(A[h1+i][c1+j]==x) return false;
	return true;
}
void xuat()
{
	int i,j;
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++) 		cout<<A[i][j]<<"  ";
		cout<<endl;
	}
	cout<<endl;
}
void Try(int i)
{
	int x=i/9,y=i%9,k;
	
	if(A[x][y]!=0) {
		if(x*y==64) xuat(); 
		else	Try(i+1);
	}
	else 
	for(k=1;k<=9;k++)
	{
		if(checkcot(y,k) && checkhang(x,k) && checkvung(x,y,k))
		{
			A[x][y]=k;
			if(x*y<64) Try(i+1);
			else {
			xuat();
			}
			A[x][y]=0;	//tra trang thai de quay lai tim pa khac	
		}
	
	}
}
int main()
{
	Try(0);
}

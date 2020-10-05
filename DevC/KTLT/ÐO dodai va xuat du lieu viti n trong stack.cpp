#include<stdio.h>
#include<stack>

using namespace std;

int Dodai(stack<int> sta)
{	int i=0;
	while(!sta.empty())
	{
		i++;
		sta.pop();
	}
	return i;
}

void Xuat(stack<int> sta)
{
	int n;
	printf("nhap vi tri can xuat du lieu: ");	scanf("%d",&n);
	if(n>Dodai(sta)||n<=0)
		printf("vi tri sai");
	else
	{
		int k = Dodai(sta);
		while(k-n>0)	
			{
				sta.pop();
				k--;
			}
		printf("Data : %d ",sta.top());
	}
}
int main()
{
	stack<int> sta;
	int n,x;
	printf("nhap n: ");scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("\nnhap data: "); scanf("%d",&x);
		sta.push(x);
	}
	printf("So phan tu trong stack la: %d\n",Dodai(sta));
	Xuat(sta);
	return 0;
}

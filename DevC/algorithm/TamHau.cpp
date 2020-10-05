#include<iostream>
using namespace std;
 
int n, x[20], b[50], c[50], a[20];
int count = 0;
 
void init()
{
	cout<<"Nhap so luong hang (cot): ";	cin >> n;
	
    for(int i = 2;i <= 2*n; i++)	//	b[i+j] = 1	duoc dat hau o hang cheo thuan i+j
        b[i] = 1;
    for(int i = 1-n; i <= n-1; i++)	//	c[i-j] = 1 duoc dat hau o hang cheo nghich i-j
        c[i] = 1;
    for(int i = 1; i <= n; i++)		// a[i] = 1 cot i chua duoc chon
        a[i] = 1;
}
 
void output()
{
	cout<<"Phuong an "<<count<<": "<<endl;
    for(int i = 1; i <= n; i++)
        cout << "Hau thu "<<i<<" xep hang thu "<<i<<" cot thu "<<x[i]<<endl;
    cout<<endl<<endl;
}
 
void tim(int i)
{
    for(int j = 1; j <= n; j++)
    {
        if(a[j] && b[i+j] && c[i-j])
        {
            a[j] = 0; b[i+j] = 0; c[i-j] = 0;
            x[i] = j;
            
            if(i==n){
            	count++;
            	output();
			}
				
            else tim(i+1);
            
            // Sau khi in 1 loi giai, tra lai trang thai ban dau con trong cho cot a[j], duong cheo i+j, duong cheo i-j de tim loi giai khác
            a[j] = 1; b[i+j] = 1; c[i-j] = 1;
        }
    }
}
 
int main()
{
    init();
    tim(1);
}

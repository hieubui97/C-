#include<iostream>
using namespace std;

int n = 9;
int a[9] = {13,-15,2,18,4,8,0,-5,-8};
int MaxS;		//gia tri max cuoi :  MaxS[i] = max{MaxS[i-1], MaxE[i]}
int MaxE;		//gia tri max tam thoi:  MaxE[i] = max {a[i], MaxE[i-1]+a[i]}, i>1

void QHD_subMax()
{
    MaxS = a[0];
	MaxE = a[0];
    int s = 0,		//s: chi so dau
		e = 0,		//e: chi so cuoi
		s1 = 0;		//s1: chi so dau tam thoi
		
    for(int i = 1; i < n; i++){
        if(MaxE > 0)  MaxE += a[i];
        else{
            MaxE = a[i]; s1 = i;	//MaxE da nho hon 0, ta tim thu day moi xem
        }
        if(MaxE > MaxS){
            MaxS = MaxE;
            e = i;
            s = s1;
        }
    }

    //xuat ket qua:
    cout<<"Day con lien tiep co tong lon nhat la: ";
    for(int i = s; i <= e; i++)
        cout<<a[i]<<"  ";
}


int main()
{
    QHD_subMax();

    return 0;
}

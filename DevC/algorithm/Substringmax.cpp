#include<iostream>
using namespace std;

int n2=9;
int A2[9]={13,-15,2,18,4,8,0,-5,-8};
int MaxS;///gia tri max cuoi :  MaxS[i] = max{MaxS[i-1], MaxE[i]}
int MaxE;///gia tri max tam thoi:  MaxE[i] = max {a[i], MaxE[i-1]+a[i]}, i>1

void SubStringMax_Dynamic()
{
    MaxS=A2[0]; MaxE= A2[0];
    int s=0, e=0, s1=0;///s: chi so dau, e: chi so cuoi, s1: chi so dau tam thoi
    for(int i=1;i<n2;i++){
        if(MaxE>0)  MaxE+= A2[i];
        else{
            MaxE=A2[i]; s1=i;///MaxE da nho hon 0, ta tim thu day moi xem
        }
        if(MaxE>MaxS){
            MaxS=MaxE;
            e=i;
            s=s1;
        }
    }

    ///xuat ket qua:
    cout<<"Day con lien tiep co tong lon nhat la: ";
    for(int i=s;i<=e;i++)
        cout<<A2[i]<<"  ";
}


int main()
{
    SubStringMax_Dynamic();

    return 0;
}

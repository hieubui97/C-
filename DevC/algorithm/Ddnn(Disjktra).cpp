#include <iostream>

using namespace std;

int a[10][10] =		{{0,20,15,-1,80,-1},
                    {40,0,-1,-1,10,30},
                    {20,4,0,-1,-1,10},
                    {36,18,15,0,-1,-1},
                    {-1,-1,90,15,0,-1},
                    {-1,-1,45,4,10,0}};
int n = 6;

void XuatDdnn(int Ddnn[10], int s, int k){
    cout<<"Duong Di Ngan Nhat tu "<<s<<" den "<<k<<": ";
    int i = k;
    while(i != s){
        cout<<i<<" <= ";
        i = Ddnn[i];
    }
    cout<<s<<endl;
}

void Dijkstra(int s)
{
    int Ddnn[10];	//chua duong di ngan nhat tu dinh s den cac dinh con lai
    int i,			//bien dem de duyet mang
        k,			//bien luu dinh ke tiep trong chu trinh
        Dht,		//bien luu dinh hien tai cua chu trinh dang tim
        Min;		//dung de tim nhan nho nhat
    int Daxet[10];	//danh dau nhung dinh da dk dua vao s
    int L[10];		//L[i] chua nhan~ cua dinh i
    
    ///khoi tao///
    for(i = 0; i < n; i++){
        Daxet[i] = 0;
        L[i] = 10000;
    }
    
    //dua s vao tap dinh da xet
    Daxet[s] = 1;
    L[s] = 0;
    
    //Ddnn[s]=0;
    
    
    Dht = s;
    
    int h = 1;	//dem du n dinh thi dung lai
    while(h < n)
    {
        Min = 10000;
        for(i = 0; i < n; i++){
            if(!Daxet[i]){
                if(a[Dht][i] != -1 && L[Dht] + a[Dht][i] < L[i]){
                    L[i]= L[Dht]+a[Dht][i];		//cap nhat nhan
                    Ddnn[i] = Dht;				//luu dinh hien tai la dinh truoc cua i tren lo trinh
                }
                if(L[i] < Min){		//chon dinh k de di tiep
                    Min = L[i];
                    k = i;
                }
            }
        }
         // Tai buoc h: tim dc duong di ngan nhat tu s->k
         XuatDdnn(Ddnn,s,k);
         cout<<"Gia tri la: "<<L[k]<<endl<<endl;
         Dht = k;
         Daxet[Dht] = 1;
         h++;

    }
}

int main()
{

    Dijkstra(0);

    return 0;
}

#include<iostream>
#define max 5
using namespace std;

void Xuatdd(int s, int k, int Ddnn[max]){
	int i;
	cout<<"\nDuong di ngan nhat tu "<<s<<" den "<<k<<" la: ";
	i = k;
	while(i!=s){
		cout<<i<<"<--";
		i = Ddnn[i];
	}
	cout<<s;
}

void dijkstra(int a[max][max], int n, int s){
	int Ddnn[max];  //Chua duong di ngan nhat tu s den dinh t tai moi buoc
	int i,k,Dht,Min;
	int Daxet[max]; //Danh dau cac dinh da dua vao S
	int L[max];		//Ghi lai nhan~ cua cac dinh
	
	for(i = 0; i < n; i++){
		Daxet[i] = 0;
		L[i] = 1000000;    //Vo cung
	}
	//Dua dinh s vao tap dinh S da xet
	Daxet[s] = 1;
	L[s] = 0;
	Dht = s;	//Dinh hien tai
	
	int h = 0;  //Dem moi buoc: cho du n-1 buoc	
	while(h < n-1){
		Min = 1000000;
		for(i = 0; i < n; i++){
			if(!Daxet[i]){
				if(L[Dht] + a[Dht][i] < L[i])   //Tinh lai nhan~
				{
					L[i] = L[Dht] + a[Dht][i];
					Ddnn[i] = Dht;
					//Gan dinh hien tai la dinh truoc dinh i tren lo trinh
				}
				if(L[i] < Min)  //Chon dinh k
				{
					Min = L[i];
					k = i;
				}
				//Tai buoc h: tim duoc duong di ngan nhat tu s den k: Ddnn[]
				Xuatdd(s, k, Ddnn);
				cout<<"\nTrong so: "<<L[k];
				Dht = k;    //Khoi dong lai Dht
				Daxet[Dht] = 1; //Dua nut k vao tap da xet
				h++;
			}
		}
	}
}



int main(){
	int a[10][10]=	{{0,20,15,-1,80,-1},
                    {40,0,-1,-1,10,30},
                    {20,4,0,-1,-1,10},
                    {36,18,15,0,-1,-1},
                    {-1,-1,90,15,0,-1},
                    {-1,-1,45,4,10,0}};
	int n=6;
}

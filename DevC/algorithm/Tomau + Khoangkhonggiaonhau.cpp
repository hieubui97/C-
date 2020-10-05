#include <iostream>
using namespace std;

//Qui uoc mau la cac so: 1, 2, 3, ...
//1. To mau mot dinh bat ky voi mau 1
//2. Voi dinh v chua to mau: To no voi mau la so nho nhat chua duoc dung 
//	voi cac dinh ke da to mau cua dinh v
//	neu tat ca cac dinh ke cua v da duoc to mau - > v se duoc to voi mau` moi'

int a[10][10]={{0,1,1,1,0,0,1,0,0},
                {1,0,0,0,0,0,0,0,1},
                {1,0,0,1,0,1,1,1,0},
                {1,0,1,0,0,1,0,0,1},
                {0,0,0,0,0,1,1,0,1},
                {0,0,1,1,1,0,1,1,1},
                {1,0,1,0,1,1,0,0,0},
                {0,0,1,0,0,1,0,0,0},
                {0,1,0,1,1,1,0,0,0}
            };
int n = 9;

bool KtToXong(int mau[]){///Kiem tra xem to het cac mau chua
    for(int i = 0; i < n; i++){
        if(mau[i] == 0)   return false;
    }
    return true;
}

void ToMau(int mau[],int k)
{
    if(KtToXong(mau))   return;		///neu da to xong roi thi thoi
    
    for(int i = 0; i < n; i++){
        if(a[k][i]==1 && mau[i]==0){	///tim cac dinh ke voi dinh hien tai ma chua dk to mau
            mau[i] = 1;				///mau be nhat co the
            int j = 0;
            while(j < n){			///tai moi dinh to mau be nhat chua co trong so cac dinh ke da dk to mau
                if(a[i][j]==1 && mau[j]==mau[i]){	///neu dinh ke da to mau hien tai roi => tang len
                    mau[i]++;
                    j = -1;			///khi tang mau len phai dem lai tu dau , neu ko se bi mat
                }
                j++;
            }						
			
            ToMau(mau,i);		///to xong dinh ke nay roi => tim cac dinh ke voi dinh vua to
        }
    }
}

void ThamLam_ToMau(int s)	///mau[i] luu lai mau to cho dinh i, s la dinh to mau dau tien
{
    int mau[10];
    
    for(int i = 0; i < n; i++)    
		mau[i] = 0;			///khoi tao
    
    mau[s]= 1;				///to mau so 1 cho dinh xuat phat

    ToMau(mau,s);
    
    ///xuat thong tin mau
    for(int i=0;i<n;i++)
        cout<<"Dinh thu "<<i+1<<" To mau "<<mau[i]<<endl;
    cout<<endl;    
}


///Phan II Bai toan khoang khong giao nhau
struct Cviec{
    int Bdau,
		Kthuc,
		id;		// chi so danh so cviec thu' may'
};

int b[10] ={2,3,1,10,6 ,9 ,16,14};
int e[10] = {5,7,8,13,15,17,20,18};

void Khoitao(Cviec cviec[],int n)
{
    for(int i = 0; i < n; i++){
        cviec[i].id = i+1;
        cviec[i].Bdau = b[i];
        cviec[i].Kthuc = e[i];
    }
}

///ThamLam1: Sapxep cong viec theo thu tu tang dan thoi diem bat dau
void SapXep1(Cviec cviec[],int n)
{
    for(int i = 0; i < n-1; i++){		//sap xep chon
        for(int j = i+1; j < n; j++){
            if(cviec[i].Bdau > cviec[j].Bdau){
                swap(cviec[i],cviec[j]);
            }
        }
    }
}

///ThamLam2: Sap xep cong viec theo thu tu tang dan (ketthuc- batdau)
void SapXep2(Cviec cv[], int n){
	for(int i = 0; i < n-1; i++)
		for(int j = i+1; j < n; j++)
			if(cv[i].Kthuc-cv[i].Bdau > cv[j].Kthuc-cv[j].Bdau)
				swap(cv[i],cv[j]);
}

///ThamLam3: sap xep theo thu tu tang dan cua thoi diem ket thuc
void SapXep3(Cviec cviec[],int n)
{
    for(int i = 0; i < n-1; i++){		//sap xep chon
        for(int j = i+1; j < n; j++){
            if(cviec[i].Kthuc > cviec[j].Kthuc){
                swap(cviec[i],cviec[j]);
            }
        }
    }
}

int XepLich(Cviec cviec[], int n, Cviec chon[])
{
    //SapXep1(cviec,n);
    //SapXep2(cviec,n);
    SapXep3(cviec,n);
    
    int k = 0;		// bien dem cac cong viec dc chon
    for(int i = 0; i < n; i++){		// kiem tra n cong viec
        bool Duocchon = true;		// true de cong viec so 1 duoc chon luon
        for(int j = 0; j < k; j++){
            if((cviec[i].Bdau < chon[j].Kthuc && cviec[i].Kthuc > chon[j].Bdau))
            {
                Duocchon = false;
                break;
            }
            /// xet cv thu i, neu thoi diem bat dau cua no nho hon thoi diem ket thuc cua bat ky cv nao da dk chon
            /// hoac thoi diem ket thuc cua no nho hon thoi diem bat dau cua......=> out ngay vi bi trung
            /// xet den cv tiep theo
        }
        ///Neu thoa man ko bi trung  them no vao cv dk chon
        if(Duocchon){
            chon[k].Bdau = cviec[i].Bdau;
            chon[k].id = cviec[i].id;
            chon[k].Kthuc = cviec[i].Kthuc;
            k++;
        }
    }
    
     ///xuat ket qua
    cout<<"Cac cong viec lan luot la: ";
    for(int i = 0; i < k; i++)
        cout<<chon[i].id<<"  ";
	cout<<endl;
	
    return k;
}

int main()
{
	ThamLam_ToMau(2);
    
	Cviec 	cviec[10],		// tap cac cong viec ban dau
			chon[10];		// tap cac cong viec duoc chon
			
    Khoitao(cviec,8);
    
    for(int i=0;i<8;i++){
        cout<<"Cviec "<<cviec[i].id<<" : "<<cviec[i].Bdau<<" - "<<cviec[i].Kthuc<<endl;
    }
    
    XepLich(cviec,8,chon);
    
    return 0;
}

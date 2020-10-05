#include<iostream>
#include<string.h>
#include<conio.h>
#include<time.h>

using namespace std;

void taobang(int **max,string str1,string str2){		
	
	int i,j;
	int l1=str1.length();
	int l2=str2.length();
	
	//base case: quy uoc ki tu dau tien la rong
	for(i=0;i<=l1;i++){
		max[i][0]=0;		//bai toan con
	}
	for(j=0;j<=l2;j++){
		max[0][j]=0;		//bai toan con
	}
	// tinh max[i][j]
	for(i=1;i<=l1;i++){
		for(j=1;j<=l2;j++){
		if((str1[i-1]==str2[j-1])){
			max[i][j]=max[i-1][j-1]+1;
		}
		else max[i][j]=max[i][j-1]>max[i-1][j]?max[i][j-1]:max[i-1][j]; 
		}
	}
}

void xuatbang(int **max,string str1,string str2){
	for(int i=0;i<=str1.length();i++){
		for(int j=0;j<=str2.length();j++){
			cout<<max[i][j]<<" ";
		}
		cout<<endl;
	}
}

void truyvet(int**max,string str1,string str2){
	int i=str1.length();
	int j=str2.length();
	
	string temp;
	while(i>0&&j>0){
		if((str1[i-1]==str2[j-1])){
			temp+=str1[i-1];
			i--;
			j--;
		}
	
		else if(max[i][j-1]>max[i-1][j]) j--;
			 else i--;
		}

	
	for(int i=temp.length()-1;i>=0;i--){
		cout<<temp[i];
	}
	cout<<endl;
}

int main(){
	string str1;
	string str2;
	cout<<"Nhap chuoi str1: ";
	getline(cin,str1);				
	cout<<"Nhap chuoi str2: ";
	getline(cin,str2);
	int l1=str1.length();
	int l2=str2.length();
	
	int **max;						//cap phat mang dong 2 chieu l1+1*l2+1
	max=new int*[l1+1];				//dung 1 con tro cap 2 va cap phat cho no m con tro cap 1
	for(int i=0;i<l1+1;i++){		//moi 1 con tro cap 1 lai cap phat cho no n phan tu
		max[i]=new int[l2+1];		//Con tro (pointer) la mot bien chua 1 dia chi bo nho lam gia tri cua no
	}
	
	clock_t start = clock();// ham bat dau dem thoi gian thuc hien ctrinh
	taobang(max,str1,str2);
	cout<<"\nBang truong hop: "<<endl;
	xuatbang(max,str1,str2);
	cout<<"\nDo dai cua xau con chung lon nhat la: "<<max[l1][l2]<<endl;
	cout<<"\nXau do la: ";
	truyvet(max,str1,str2);
	
	clock_t finish = clock();
	double t= double(finish-start)/CLOCKS_PER_SEC;
	cout<<"\nThoi gian thuc thi cua chuong trinh: "<<t<<" (s)";
	
	
	for(int i=0;i<l1+1;i++){		//giai phong bo nho da cap cho mang dong 2 chieu
		delete []max[i];
	}
	delete[]max;
	
	return 0;
}

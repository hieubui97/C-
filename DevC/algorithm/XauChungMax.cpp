#include<iostream>
#include<string.h>
#include<conio.h>
#include<time.h>

using namespace std;

string str1;
string str2;

void QHD_XauChungMax(){
	int i,j;
	int l1 = str1.length();
	int l2 = str2.length();
	int max[l1+1][l2+1];
	
	//base case: quy uoc ki tu dau tien la rong
	for(i = 0; i <= l1; i++){
		max[i][0] = 0;		//bai toan con
	}
	for(j = 0; j <= l2; j++){
		max[0][j] = 0;		//bai toan con
	}
	
	// tinh max[i][j]
	for(i = 1; i <= l1; i++){
		for(j = 1; j <= l2; j++){
		if((str1[i-1] == str2[j-1])){
			max[i][j] = max[i-1][j-1]+1;
		}
		else max[i][j] = max[i][j-1] > max[i-1][j] ? max[i][j-1] : max[i-1][j]; 
		}
	}
	
	// Xuat bang
	cout<<"\nBang truong hop: "<<endl;
	for(int i = 0; i <= l1; i++){
		for(int j = 0; j <= l2; j++){
			cout<<max[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<"\nDo dai cua xau con chung lon nhat la: "<<max[l1][l2]<<endl;
	
	// Truy vet
	i = l1;
	j = l2;
	
	string temp;
	while(i > 0 && j > 0){
		if((str1[i-1] == str2[j-1])){
			temp += str1[i-1];
			i--;
			j--;
		}
	
		else if(max[i][j-1] > max[i-1][j]) j--;
			 else i--;
		}

	cout<<"\nXau do la: ";
	for(int i = temp.length()-1; i >= 0; i--){
		cout<<temp[i];
	}
	cout<<endl;
}

int main(){
	
	cout<<"Nhap chuoi str1: ";
	getline(cin,str1);				
	cout<<"Nhap chuoi str2: ";
	getline(cin,str2);
	

	clock_t start = clock();// ham bat dau dem thoi gian thuc hien ctrinh

	QHD_XauChungMax();
	
	clock_t finish = clock();
	
	double t= double(finish-start)/CLOCKS_PER_SEC;
	cout<<"\nThoi gian thuc thi cua chuong trinh: "<<t<<" (s)";
	
	return 0;
}

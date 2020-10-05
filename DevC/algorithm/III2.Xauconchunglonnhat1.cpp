#include<iostream>
#include<fstream>
#include<string.h>
#include<time.h>
#include<stdlib.h>

using namespace std;

void input(){
	char a;
	srand(time(NULL));
	
	fstream f1;
	f1.open("inputs1.txt");
	for(int i=0;i<=1000000;i++){
		//a=rand()%(127-32)+32;
		a=rand()%(91-65)+65;			//random 65->90 tuong tuong ung voi ki tu A->Z trong bang ma ASCII
		f1<<a;
	}
	f1.close();
	
	fstream f2;
	f2.open("inputs2.txt");
	for(int i=0;i<1000000;i++){
		//a=rand()%(127-32)+32;
		a=rand()%(91-65)+65;
		f2<<a;
	}
	f2.close();
}


void taobang(int **max,char str1[],char str2[]){		
	
	int i,j;
	int l1=strlen(str1);
	int l2=strlen(str2);

	//base case: quy uoc ki tu dau tien la rong(NULL)
	for(i=0;i<=l1;i++){
		max[i][0]=0;			//bai toan con 
	}
	for(j=0;j<=l2;j++){
		max[0][j]=0;			//bai t oan con
	}
	
	for(i=1;i<=l1;i++){
		for(j=1;j<=l2;j++){
			if(str1[i-1]==str2[j-1]){		//neu 2 ki tu bang nhau thi xau con chung dai nhat of str1i vs str1j
				max[i][j]=max[i-1][j-1]+1;	//thu duoc bang viec them str1[i] vao xau con chung of str1i-1vs str2j-1
			}
			/*neu khac nhau thi xau con chung cua str1i]vs str2j
			se la xau dai hon trong 2 xau con chung cua str1i-1vs str2j VA str1i vs str2j-1 */
			else max[i][j]=max[i][j-1]>max[i-1][j]?max[i][j-1]:max[i-1][j];
		}
	}
}

void xuatbang(int **max,char str1[],char str2[]){
	for(int i=0;i<=strlen(str1);i++){
		for(int j=0;j<=strlen(str2);j++){
			cout<<max[i][j]<<" ";
		}
		cout<<endl;
	}
}

void truyvet(int **max,char str1[],char str2[]){
	int i=strlen(str1);
	int j=strlen(str2);
	
	string temp;
	while(i>0&&j>0){
		{
			if(str1[i-1]==str2[j-1]){
				temp+=str1[i-1];
				i--;
				j--;
				
			}
			else if(max[i][j-1]>max[i-1][j]) j--;
				 else i--;
		}
	}
	
	for(int i=temp.length()-1;i>=0;i--){
		cout<<temp[i];
	}
	cout<<endl;
}

int main(){
	
	//input();
	int m,n;
	do{
		cout<<"Nhap do dai cua xau 1: ";
		cin>>m;
	}while(m<0);
	
	char *str1;
	str1=new char[m];
	fstream f1;
	f1.open("inputs1.txt");
	f1.getline(str1,m+1);
	
	do{
		cout<<"Nhap do dai cua xau 2: ";
		cin>>n;
	}while(n<0);
	
	char*str2;
	str2=new char[n];
	fstream f2;
	f2.open("inputs2.txt");
	f2.getline(str2,n+1);
	
	int **max;						//cap phat mang dong 2 chieu l1+1*l2+1
	max=new int*[m+1];				//dung 1 con tro cap 2 va cap phat cho no m con tro cap 1
	for(int i=0;i<m+1;i++){			//moi 1 con tro cap 1 lai cap phat cho no n phan tu
		max[i]=new int[n+1];		//Con tro (pointer) la mot bien chua 1 dia chi bo nho lam gia tri cua no
	}
	cout<<"\nChuoi str1: "<<str1<<endl;
	cout<<"\nChuoi str2: "<<str2<<endl;
	
	clock_t start = clock();// ham bat dau dem thoi gian thuc hien ctrinh
	taobang(max,str1,str2);
	cout<<"\nBang truong hop: "<<endl;
	//xuatbang(max,str1,str2);
	cout<<"\nDo dai cua xau con chung lon nhat la: "<<max[m][n]<<endl;
	cout<<"\nXau do la: ";
	truyvet(max,str1,str2);
	
	clock_t finish = clock();
	double t= double(finish-start)/CLOCKS_PER_SEC;
	cout<<"\nThoi gian thuc thi cua thuat toan: "<<t<<" (s)";
	
//	for(int i=0;i<n+1;i++){		
//		delete []max[i];
//	}
	delete[]max;					//giai phong bo nho da cap cho mang dong 2 chieu
	
	return 0;
}

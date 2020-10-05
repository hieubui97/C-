#include<iostream>
#include<conio.h>

using namespace std;

void Nhap(int**a,int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<"a["<<i<<"]"<<"["<<j<<"] = ";
			cin>>a[i][j];
		}
	}
}
void Xuat(int**a,int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<"	";
		}
		cout<<endl;
	}
}

bool KTPX(int **a,int n){
	int count;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){		
			if((i==j)&&(a[i][j]==1)){
				count++;
				}
			}
		}
	if(count==n){
		return true;
	}
	else
		return false;
}
bool KTDX(int **a,int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){		
			if(a[i][j]==a[j][i]){
				return true;
			}
			else{
				return false;
			}
		}	
	}
}

bool KTBC(int **a,int n){
	int b[100];
	int temp;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			b[temp++]=a[i][j];	
		}
		
	}
	for(int i=0;i<temp;i++){
		if(b[temp+2]==1){
			if(b[temp+1]==1&&b[temp+1]==1){
				return true;
			}
			else{
				return false;
			}
		}
	}
}
void LietKe(int **a,int n){
	int b[100];
	int temp;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){		
			if((i==j)&&(a[i][j]==1)){
				printf("a[%d][%d]",i,j);
				}
			}
		}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){		
			if(a[i][j]==a[j][i]){
				printf("a[%d][%d]",i,j);
		
		}	
	}
}
	for(int i=0;i<temp;i++){
		if(b[temp+2]==1&&b[temp+1]==1&&b[temp]==1){
			printf("(%d,%d,%d)",b[temp],b[temp+1],b[temp+2]);
		}
	}
}
int main(){
	int **a;
	int n,i,j;
	cout<<"nhap bac ma tran:"<<endl;
	cout<<"n = ";cin>>n;
	a=new int*[n];
	for(i=0;i<n;i++){
		a[i]=new int[n];
	}
	Nhap(a,n);
	Xuat(a,n);if(KTPX(a,n)==true&&KTDX(a,n)==true&&KTBC(a,n)==true){
		printf("ma tran co quan he tuong duong!!");
		LietKe(a,n);	
	}	
		
	else	printf("ma tran k co quan he tuong duong!!");
	for(i=0;i<n;i++){
		delete a[i];
	}
	delete a;
	getch();
}

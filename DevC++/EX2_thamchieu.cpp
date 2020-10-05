#include<iostream> 
using namespace std; 
/*void swap(int *x,int *y){ 
	int *temp; 
	temp=x; x=y; 
	y=temp; }*/ 
/*void swap(int&x,int&y){ 
	int temp=x; 
	x=y; 
	y=temp; 
	} 
int main(){ 
	int x=5; 
	int y=3; 
	cout<<"khi chua doi cho:"<<x<<"----"<<y<<endl; 
	swap(x,y); 
	cout<<"sau khi doi cho:"<<x<<"----"<<y<<endl; 
}*/ 
int main(){ 
	int y; 
	int &x=y; 
	x=10; 
	cout<<y<<endl; 
	y=15;
	cout<<x<<endl;
	}

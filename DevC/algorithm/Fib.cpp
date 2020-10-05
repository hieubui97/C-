#include<iostream>
using namespace std;

int fib(int n){
	int f0=1,f1=1,f2=1;
	while(n>2){
		f2=f0+f1;
		f0=f1;
		f1=f2;
		n--;
	}
	return f2;
}

int main(){
	cout<<fib(5);
	return 0;
}

#include<iostream>
using namespace std;

int Fib(int n){
	if(n<2) return n;
	else return(Fib(n-1)+Fib(n-2));
}

int Fibo(int n){
	int f[n+1];
	f[0]=0;
	f[1]=1;
	if(n>=2)
		for(int i=2;i<=n;i++){
			f[i]=f[i-1]+f[i-2];
		}
	return f[n];	
}

int Fibonaci(int n){
	int f[3];
	f[0]=0;
	f[1]=1;
	f[2]=1;
	while(n>=2){ 			//--n-1 or n-2
		f[2]=f[1]+f[0];
		f[0]=f[1];
		f[1]=f[2];
		n--;
	}
	return f[2];
}

int main(){
	cout<<Fib(6)<<endl;
	cout<<Fibo(6)<<endl;
	cout<<Fibonaci(6);
}

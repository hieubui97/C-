#include<iostream>

using namespace std;

int main(){
	int n = 6;							//number of objects
	int c[] = {0,7,10,20,19,13,40};		//values of items
	int w[] = {0,3,4,5,7,6,9};			//weights of items
	int b = 19;							//weights of the bag
	int maxv[n+1][b+1];
	
	
	//Dynamic programing
	//Base case
	int i, j, temp;
	for(i = 0; i <= n; i++){
		maxv[i][0] = 0;					//b=0->maxv=0
	}
	for(j = 0; j <= b; j++){
		maxv[0][j] = 0;					//khong duoc chon do vat nao->maxv=0
	}
	
	
	//Optimize using bellman equation
	for(i = 1; i <= n; i++){
		for(j = 1; j <= b; j++){
			maxv[i][j] = maxv[i-1][j];		//khong chon vat i
			temp = maxv[i-1][j-w[i]]+c[i];	//chon vat i
			if(j>=w[i] && maxv[i][j]<temp)
				maxv[i][j] = temp;
				
		}
	}
	
	//Check if the subsolutions is correct
	for(i = 0; i <= n; i++){
		for(j = 0; j <= b; j++){
			cout<<maxv[i][j]<<"  ";
		}
		cout<<endl<<endl;
	}
	
	//Output solution
	cout<<"Maximum value: maxv[n][b]= "<<maxv[n][b]<<endl;
	
	//What chosen items ?
	i = n;
	j = b;
	int p[n];
	int count = 0;
	
	while(i > 0) {
		if(maxv[i][j] == maxv[i-1][j-w[i]]+c[i]){
			count++;
			p[count] = i;
			j = j-w[i];
		}
		i--;
	}
	cout<<"Number of chosen items: "<<count<<endl;
	cout<<"Details of items: ";
	for(i = count; i >= 1; i--)
		cout<<p[i]<<" ";
	
		
}

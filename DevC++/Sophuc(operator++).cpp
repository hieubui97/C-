#include<iostream>
using namespace std;

class sophuc{
	private:
		float pt,pa;
	public:
		sophuc(float pt,float pa){
			this->pt=pt;
			this->pa=pa;
		}
		friend ostream&operator<<(ostream&,sophuc);	
};
ostream&operator<<(ostream&output,sophuc sp){
	output<<sp.pt<<" + i*"<<sp.pa<<endl;
	return output;
}

int main(){
	sophuc sp(1,2);
	cout<<sp;
}

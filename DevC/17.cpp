#include<iostream>
#include<math.h>
using namespace std;

void gptb2(int a, int b, int c){
	if(a == 0) cout<<"x = "<<-c*1.0/b;
	else{
		float delta = (float)(b*b - 4*a*c);
		if(delta < 0) cout<<"PT vo nghiem";
		else if(delta == 0) cout<<"PT co nghiem kep: x = "<<(-b + sqrt(delta))*1.0/(2*a);
			else cout<<"PT co 2 nghiem phan biet: x1 = "<<(-b + sqrt(delta))*1.0/(2*a)<<" x2 = "<<(-b - sqrt(delta))*1.0/(2*a);
	}
}

int main(){
	gptb2(2,4,2);
}

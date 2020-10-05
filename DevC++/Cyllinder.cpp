#include<iostream>
using namespace std;

class point{
	protected:
		float x,y;
	public:
		point(float x=0, float y=0){
			this->x=x;
			this->y=y;
		}	
		void setpoint(float x,float y);
		float getX()const;				//them const de bao ve khong sua doi
		float getY()const;
		friend ostream& operator<<(ostream&output,const point p){
			output<<p.x<<", "<<p.y<<endl;
			return output;
		}
		void tostring(){
			cout<<"day la lop point"<<endl;
		}
};
void point::setpoint(float x,float y){
	this->x=x;
	this->y=y;
}
float point::getX()const{
	return x;
}
float point::getY()const{
	return y;
}

class circle:public point{
	protected:
		float r;
	public:
		circle(float x,float y,float r):point(x,y),r(r){
		}	
		void setr(float r){
			this->r=r;
		}
		float getr()const{
			return r;
		}
		float area(){
			return(3.14*r*r);
		}
		friend ostream& operator<<(ostream&output,circle c){
			output<<"tam: "<<c.x<<","<<c.y<<" bk: "<<c.r<<endl;
			return output;
		}
};

class cylinder:public circle{
	private:
		float h;
	public:
		cylinder(float x,float y,float r,float h):circle(x,y,r),h(h){
		}	
		void seth(){
			this->h=h;
		}
		float geth(){
			return h;
		}
		float area(){
			return(3.14*r*r*2+2*3.14*r*h);
		}
		float v(){
			return(3.14*r*r*h);
		}
		friend ostream& operator<<(ostream&output,cylinder cy){
			output<<"htron c:"<<"tam: "<<cy.x<<","<<cy.y<<" bk: "<<cy.r<<endl<<"chieucao: "<<cy.h<<endl;
		}
};

int main(){
	point p(10,20);
	cout<<p;
	cout<<p.getX()<<endl;
	cout<<p.getY()<<endl;
	
	circle c(1,1,5);
	cout<<c;
	cout<<c.getr()<<endl;
	cout<<c.area()<<endl;
	
	cylinder cy(0,0,5,5);
	cout<<cy;
	cout<<cy.geth()<<endl;
	cout<<cy.area()<<endl;
	cout<<cy.v();
	return 0;
}

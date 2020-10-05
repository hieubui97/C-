#include<iostream>
using namespace std;

class shape{
	public:
		virtual float area() const{return 0.0;}
		virtual float volume()const{return 0.0;}
		virtual void shapename()=0;
};

class point:public shape{
	protected:
		float x;
		float y;
	public:
		point(float x,float y){
			this->x=x;
			this->y=y;			
		}
		void setpoint(float,float);
		float getx()const{return x;}
		float gety()const{return y;}
		virtual void shapename()const {cout<<"point: ";}
		friend ostream& operator<<(ostream&output,const point &p){
			output<<p.x<<", "<<p.y<<endl;
			return output;
		}
};
void point::setpoint(float x,float y){
	this->x=x;
	this->y=y;
}

class circle:public point{
	protected:
		float radius;
	public:
		circle(float x=0,float y=0,float r=0):point(x,y),radius(r){}
		void setradius(float);
		float getradius()const{return radius;}
		virtual float area()const;
		virtual void shapename()const {cout<<"circle: ";}
		friend ostream& operator<<(ostream& output,const circle&c){
			output<<"tam: "<<"("<<c.x<<", "<<c.y<<")"<<"   bankinh: "<<c.radius<<endl;
			return output;
		}
		
};
void circle::setradius(float r){
	radius=r;
}
float circle::area()const{
	return(3.14*radius*radius);
}

class cylinder:public circle{
	protected:
		float height;
	public:
		cylinder(float x=0,float y=0,float r=0,float h=0):circle(x,y,r),height(h){	}
		void setheight(float);
		float getheight()const{return height;};
		virtual float area()const;
		virtual float volume()const;
		virtual void shapename()const {cout<<"cylinder: ";}
		friend ostream& operator<<(ostream&output,const cylinder& cy){
			
		}
};
void cylinder::setheight(float h){
	height=h;
}
float cylinder::area()const{
	return(2*3.14*radius*radius+2*3.14*radius*height);
}
float cylinder::volume()const{
	return(3.14*radius*radius*height);
}

int main(){
	point p(10.1,15.15);
	p.shapename();
	cout<<p;
	cout<<p.getx();
	cout<<p.getx();
	p.setpoint(30,40);
	cout<<p;
	
}

//int main(){
//	point p(3.2,4.5);
//	circle c(2.4,12,5.6);
//	cylinder cy(3.5,6.4,5.2,10.5);
//	p.shapename();
//	cout<<p<<endl;
//	c.shapename();
//	cout<<c<<endl;
//	cy.shapename();
//	cout<<cy<<endl<<endl;
//	shape*pt;
//	pt=&p;
//	pt->shapename();
//	cout<<"x= "<<p.getx()<<", y= "<<p.gety()<<"|narea= "<<pt->area()<<"\nvolume= "<<pt->volume()<<"\n\n";
//	pt=&c;
//	pt->shapename();
//	cout<<"x= "<<c.getx()<<", y= "<<c.gety()<<"|narea= "<<pt->area()<<"\nvolume= "<<pt->volume()<<"\n\n";
//	pt=&cy;
//	pt->shapename();
//	cout<<"x= "<<cy.getx()<<", y= "<<cy.gety()<<"|narea= "<<pt->area()<<"\nvolume= "<<pt->volume()<<"\n\n";
//	
//}

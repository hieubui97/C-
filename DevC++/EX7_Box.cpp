#include<iostream>
using namespace std;
class Box{
	private:
		int height;
		int width;
		int length;
	public:
		Box();
		Box(int,int,int);
		long int volume();
			
};
Box::Box():height(10),width(10),length(10){}
Box::Box(int h,int w=0,int l=0){
	this->height=h;
	this->width=w;
	this->length=l;
}
long int Box::volume(){
	return this->height*this->length*this->width;
}

int main(){
	Box box1;
	cout<<box1.volume()<<endl;
	Box box2(20);
	cout<<box2.volume()<<endl;
	Box box3(20,20,20);
	cout<<box3.volume()<<endl;
	return 0;
}

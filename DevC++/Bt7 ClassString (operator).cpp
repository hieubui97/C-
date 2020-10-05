#include<iostream>
#include<string.h>
using namespace std;

class String{
	
	private:
		char*str;
	public:
		String(){
			str=NULL;
		}	
		String(char*str){
			this->str=str;
		}
		void display(){
			cout<<str<<endl;
		}
		friend bool operator>(String&,String&);
		friend bool operator<(String&,String&);
		friend bool operator==(String&,String&);
//		friend ostream& operator<<(ostream&output,String &s);
//		friend istream& operator<<(istream&output,String &s);
};
bool operator>(String&str1,String&str2){
	if(strcmp(str1.str,str2.str)>0) return 1;
	else return 0;
}
bool operator<(String&str1,String&str2){
	if(strcmp(str1.str,str2.str)<0) return 1;
	else return 0;
}
bool operator==(String&str1,String&str2){
	if(strcmp(str1.str,str2.str)==0) return 1;
	else return 0;
}

//ostream&operator<<(ostream& output,String s){
//	output<<s.str;
//	return output;
//}
//istream&operator>>(istream& input,String s){
//	input>>s.str;
//	return input;
//}

int main(){
	String str1("helooooooooooooo");
	str1.display();
	String str2("world");
	str2.display();
	if(str1>str2) cout<<"string 1 > string 2 "<<endl;
	if(str1<str2) cout<<"string 1 < string 2 "<<endl;
	if(str1==str2) cout<<"string 1 = string 2" <<endl;
//	String str1("hello world");
//	cout<<str1<<endl;
//	return 0;
}


#include<iostream>
#include<string.h>

using namespace std;

void xoa_dau(string &s){
	while(s[0]==32){
		strcpy(&s[0],&s[1]);
	}
}

void xoa_cuoi(string &s){
	while(s[s.length()-1]==' '){
		strcpy(&s[s.length()-1],"");
	}
}

void xoa_trong(string &s){
	int i=1;
	while(i<s.length()){
		while(s[i]==32&&s[i+1]==32){
			strcpy(&s[i],&s[i+1]);
			i++;
		}
	}
}

void xoa_truoc_dau(string &s){
	for(int i=1;i<s.length();i++){
		if(((s[i]=='.')||(s[i]==',')||(s[i]==';')||(s[i]==':'))&&(s[i-1]==32)){
			strcpy(&s[i-1],&s[i]);
		}
	}
}

void them_sau_dau(string &s){
	string b;
	for(int i=1;i<s.length();i++){
		if(((s[i]=='.')||(s[i]==',')||(s[i]==';')||(s[i]==':'))&&(s[i-1]!=32)){
			strcpy(&b[0],&s[i+1]);
			s[i+1]=32;
			strcpy(&s[i+2],&b[0]);
		}
	}
}

void viet_hoa_dau_cau(string &s){
	s[0]=toupper(s[0]);
	for(int i=1;i<s.length();i++){
		if(s[i]=='.') s[i+2]=toupper(s[i+2]);
	}
}

int main(){
	string a;
	cout<<"Nhap string a: ";
	getline(cin,a);
	xoa_dau(a);
	xoa_cuoi(a);
	xoa_trong(a);
	xoa_truoc_dau(a);
	them_sau_dau(a);
	//viet_hoa_dau_cau(a);
	cout<<a;
	return 0;
}

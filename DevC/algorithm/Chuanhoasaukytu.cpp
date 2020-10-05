#include<iostream>
#include<string.h>
using namespace std;

void xoa_dau(string &s){
	while(s[0] == 32){
		strcpy(&s[0], &s[1]);
	}
} 

void xoa_cuoi(string &s){
	while(s[s.length()-1] == ' '){
		s[s.length()-1] = NULL;
	}
}

void xoa_trong(string &s){
	int i = 1;
	while(s[i] == s[i+1] && s[i] ==' '){
		strcpy(&s[i], &s[i+1]);
	}
}

void xoa_truoc_dau(string &s){
	for(int i = 1; i < s.length(); i++){
		if(((s[i] == '.') || s[i] == ',' || s[i] == ':' || s[i] == ';') && s[i-1] == ' '){
			strcpy(&s[i-1], &s[i]);
		}
	}
}

void them_sau_dau(string &s){
	string a = s;
	for(int i = 1; i < s.length(); i++){
		if(((s[i] == '.') || s[i] == ',' || s[i] == ':' || s[i] == ';') && s[i-1] != ' '){
			s[i+1] = ' ';
			strcpy(&s[i+2], &a[i+1]);
		}
	}
}

void viet_hoa(string &s){
	s[0] = toupper(s[0]);
	for(int i = 1; i < s.length(); i++){
		if(s[i] == '.') s[i+2] = toupper(s[i+2]);
	}
}

void chuan_hoa_chuoi(string &s){
	xoa_dau(s);
	xoa_cuoi(s);
	xoa_trong(s);
	xoa_truoc_dau(s);
	them_sau_dau(s);
	viet_hoa(s);
}

int main(){
	string s;
	cout<<"Nhap chuoi: ";
	getline(cin,s);
	chuan_hoa_chuoi(s);
	cout<<s;
}

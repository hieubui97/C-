#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
	int stuID;
	string name;
	double gpa;
	ofstream outfile;
	outfile.open("students.txt");
	if(!outfile.good()) cout<<"file could not be opened"<<endl;
	else{
		cout<<"enter ID,name, and grade pointaverage"<<endl;
		cout<<"enter end-of-file key combination to end"<<endl;
		while(cin>>stuID>>name>>gpa){
			outfile<<stuID<<" "<<name<<" "<<gpa<<endl;
			cout<<"enter ID,name,and grade pointaverage"<<endl;
			cout<<"enter end-of-file key combination to end";
		}
	}
	outfile.close();
	return 0;
}

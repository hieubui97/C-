#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;

int main(){
	int stuID;
	string name;
	double gpa;
	const int COL_SZ=10;
	ifstream infile;
	infile.open("students.txt");
	if(!infile.good()) cout<<"file could not be opened!"<<endl;
	else {
		cout<<left;
		cout<<"student records: "<<endl;
		cout<<setw(10)<<"stuID"<<setw(COL_SZ)<<"name"<<setw(COL_SZ)<<"grade pointaverage"<<endl;
		while(infile>>stuID>>name>>gpa){
			cout<<setw(COL_SZ)<<stuID<<setw(COL_SZ)<<name<<setw(COL_SZ)<<gpa<<endl;
		}
	}
	infile.close();
	return 0;
}

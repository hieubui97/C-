#include<iostream> 
using namespace std; 
class Student{ 
	// thuoc tinh,du lieu 
	private: int StudentID; 
	string StudentName; 
	//phuong thuc, ham 
	public: Student(); 
	void Set(int ID,string Name); 
	void OutPut(); 
	}; 
Student::Student(){ 
	this->StudentID=23; 
	this->StudentName="bui tien dung"; 
	} 
/*void Student::Set(int ID,string Name){ 
	StudentID=ID; 
	StudentName=Name; 
}*/ 
void Student::OutPut(){ 
	cout<<"Ho va ten : "<<StudentName<<endl; 
	cout<<"Masv: "<<StudentID<<endl; 
	} 
int main(){ 
	Student st; 
	//st.Set(16151500,"bui minh hieu"); 
	st.OutPut(); 
}

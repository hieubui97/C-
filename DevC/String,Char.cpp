#include <iostream>
#include <conio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>

using namespace std;

int main()
{
//    char a[1000];
//    cin.getline(a,1000);
//    
//    string b=" x ";
//    string c;
//    getline(cin,c);
//    cout<<a<<b<<c;
//	   cout << "Enter your age: ";
//       int nAge;
//       cin >> nAge;
//		cin.ignore();
//       cout << "Enter your name: ";
//       string strName;
//       getline(cin, strName);
//		int l=strName.length();
//		cout<<strName[l-1];

//       cout << "Hello " << strName << endl;
//       cout << "Your age " << nAge << endl;    
	string a;
	srand(time(NULL));
	for(int i=0;i<100;i++){
		a[i]=rand()%255;
	}
	for(int i=0;i<100;i++){
		cout<<a[i];
	}
       
      
    return 0;
}

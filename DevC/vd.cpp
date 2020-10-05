#include <iostream>
#include<stdio.h>
#include <stdlib.h>
#include<time.h>
#include<string.h>
#include <sstream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int lr;
	int r;	
	cin>>lr;
	string result;
	
	srand(time(NULL));
	for(int i=1;i<=lr;i++)
	{	
		r=rand() % 9;
		ostringstream convert;   
    	convert << r;  
    	result += convert.str(); 
		//cout<<r;	
	}
	cout<<result;
	return 0;
}

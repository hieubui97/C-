#include<iostream>
using namespace std;

class A
{
public:
	int  a;
} ;   
class B :public A
{
public:
	int  b;
} ;
class C :public A
{
public:
	int  c;
} ;
class D : public B , public C
{
public:
	int  d;
} ;
int main()
{
D  h ;
h.d = 4 ; 
h.c =  3 ; 
h.b = 2 ;
h.a =  1 ; // loi do khong xac dinh ro a ke thua thong qua B hay C
			// sua loi: them vitual public class A o lop B va C
}


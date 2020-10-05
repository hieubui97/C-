#include <iostream>
#include <conio.h>
using namespace std;
class A
{
  public:
  		virtual void Chao() =0;
};

// class B
class B:public A
{
  public:
  void Chao()
   {
     cout<<"\nB chao cac ban";
   }
 };

// class C
class C:public A
{
  public:
  void Chao()
  {
    cout<<"\nC chao cac ban";
  }
};
// ham main
int main()
{
//   A a;  khong the khai bao doi tuong thuoc lop co so truu tuong
     B b;
     b.Chao();
     C c;
     c.Chao();
}

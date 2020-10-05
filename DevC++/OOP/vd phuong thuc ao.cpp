#include <iostream>
#include <conio.h>
using namespace std;
class A
{
  public:
  virtual void Chao() //phuong thuc ao
 {
  cout<<"\nA chao cac ban";
 }
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
   A a;
   A *pa= new A; pa->Chao(); //goi chao cua A
   B b;
   pa=&b; pa->Chao(); //goi chao cua B
   C c;
   pa=&c; pa->Chao(); //goi chao cua C
   getch();
}

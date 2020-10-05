#include <iostream>
using namespace std;

main()
{
   int a = 21;
   int c ;

   c =  a;
   cout << "Dong 1: Voi toan tu = thi gia tri cua c la: " <<c<< endl ;

   c +=  a;
   cout << "Dong 2: Voi toan tu += thi gia tri cua c la: " <<c<< endl ;

   c -=  a;
   cout << "Dong 3: Voi toan tu -= thi gia tri cua c la: " <<c<< endl ;

   c *=  a;
   cout << "Dong 4: Voi toan tu *= thi gia tri cua c la: " <<c<< endl ;

   c /=  a;
   cout << "Dong 5: Voi toan tu /= thi gia tri cua c la: " <<c<< endl ;

   c  = 200;
   c %=  a;
   cout << "Dong 6: Voi toan tu %= thi gia tri cua c la: " <<c<< endl ;

   c <<=  2;
   cout << "Dong 7: Voi toan tu <<= thi gia tri cua c la: " <<c<< endl ;

   c >>=  2;
   cout << "Dong 8: Voi toan tu >>= thi gia tri cua c la: " <<c<< endl ;

   c &=  2;
   cout << "Dong 9: Voi toan tu &= thi gia tri cua c la: " <<c<< endl ;

   c ^=  2;
   cout << "Dong 10: Voi toan tu ^= thi gia tri cua c la: " <<c<< endl ;

   c |=  2;
   cout << "Dong 11: Voi toan tu |= thi gia tri cua c la: " <<c<< endl ;

   return 0;
}

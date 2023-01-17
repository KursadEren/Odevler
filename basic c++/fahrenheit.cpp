#include <iostream>
using namespace std;
int main ()
{ int ftemp;
   cout << "fahreniht değerini giriniz " ;
   cin >> ftemp;
   int ctemp = (ftemp-32 ) * 5/9 ;
   cout << " celsius " << ctemp << '\n';
   return 0; 
}
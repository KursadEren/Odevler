// do ile while 
#include <iostream>
using namespace std;
int main ()
{
   long divined, divisor;
   char ch;

   do
   {
       cout << "enter the divined: ";
       cin >> divined;
       cout << " enter divisor: "; 
       cin >> divisor;
       cout << " quotint is" << divined / divisor;
       cout << " remainder " << divined % divisor;
       cout << "\n do another (y\n):";
       cin >> ch;
       
   } while (ch != 'n');
   return 0;
   
   
}
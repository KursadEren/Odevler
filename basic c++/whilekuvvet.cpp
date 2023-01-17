// cubelist programı gibi am 4 üncü kuvvetlerini alıcağız while
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
     int pow = 1;
     int numb = 1;
     while(pow<10000)
     {
         pow = numb*numb*numb*numb;
         cout << setw(2) << numb;
         cout << setw(5) << pow << endl;
         ++numb;
        

         

      }
    cout << endl;
    return 0;

}

#include <iostream>
#include <iomanip>    // setw için gerekli
using namespace std;
int main ()
{
    long pop1 = 2425785 , pop2 = 47 , pop3 = 9761 ;

    cout << setw(8) << " LOCATİON " << setw(12)<< "POPULATİON " << endl
    << setw(8) << " Portcity " << setw(12) << pop1 << endl
    << setw(8) << " Hightown " << setw(12) << pop2 << endl
    << setw(8) << " Lowville " << setw(12) << pop3 << endl;
    return 0;
}
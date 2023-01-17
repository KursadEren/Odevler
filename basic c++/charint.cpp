#include <iostream>
using namespace std;
int main ()
{
    int intVar = 1500000000;
    intVar = (intVar * 10 )  ;
    cout << " intVar " << intVar << endl;

     intVar =  1500000000; 
     intVar = (static_cast<double>(intVar) * 10) / 10 ; // int tipinden double tipine dönüştürme
     cout << "intVar " <<  intVar << endl;

     return 0;
}//sıkıntı var!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! aslında yok ama ilk kısımda sonucun bozulması gerekiyor 
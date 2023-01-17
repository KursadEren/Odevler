// girilen kelme sayısnı bulur 
#include <iostream>
using namespace std;
#include <conio.h>
int main()

{
    int chcount = 0;
    int wdcount = 1;
    char ch;
    while ((ch=getche ( ) )  != '\r')
    {
        if(ch== ' ')
        wdcount++;
        else 
        chcount++;
    }
    cout << " \nwords= " << wdcount << endl 
    << " letters= " << chcount << endl;
    
}
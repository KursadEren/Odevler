#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int i, j;
    for( i= 0; i <= 5; i++)
    {
        for( j = 5 - i; j  >= 0; j--)
        cout << " ";
        for (j =0; j <= i; j++)
        cout << "*";
        cout << " ";
        for (j =0; j <= i; j++)
        cout << "*";
        cout << endl;
    }
}
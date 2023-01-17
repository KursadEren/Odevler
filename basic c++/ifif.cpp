#include <iostream>
using namespace std;
int main()
{
    unsigned long n, j;
    cout << "enter a number ";
    cin >> n;
    for(j=2; j <= n/2; j++)
    if(n%j == 0)
    {
        cout <<  " its not prime; divisible by" << j << endl;
        exit(0); 
    }
    cout << "ıts prime\n"; return 0;
}
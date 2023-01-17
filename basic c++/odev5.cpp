#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    float celsius, fahrenheit;

    cout << " celsius değerini giriniz = " << endl;
    cin >> celsius ;
    fahrenheit = celsius * 9/5 + 32 ;
    cout << "fahrenheit değeri = "<< fahrenheit << endl;
    return 0;
}
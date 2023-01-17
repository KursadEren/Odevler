// static.cpp
#include <iostream>
#include <cmath>
using namespace std;
float ortaal(int sayi);
int main()
{
    unsigned int sayi;
    float ort;
    cout << "sayi "<< endl;
    cin >> sayi;

    while(sayi != 0)
    {
        cout << "ortalama " << ortaal(sayi) << endl;
        cout << " sayı   "<< endl;
        cin >> sayi;
    }
}

float ortaal(int sayi)
{
     float toplam =0;
     int say = 0;
    say++;
    toplam += sayi;
    return toplam / say;
}
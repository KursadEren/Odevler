#include <iostream>
using namespace std;
int main()
{
    float sterlin , dolar, frank, mark , japonyeni ;

     sterlin = 1;
     cout << " sterlin değerini girin " << endl;
     cin >> sterlin ;

     dolar = sterlin * 1.487 ; 
     cout << " dolar değeri ="<< dolar << endl;

     frank = dolar * 0.172;
     cout << "  frank değeri =" << frank << endl;

     mark = dolar  * 0.584;
     cout << " mark değeri = " << mark << endl;

     japonyeni = dolar * 0.00955;
     cout << " japonyeni değeriniz =" << japonyeni << endl;

     return 0;


}
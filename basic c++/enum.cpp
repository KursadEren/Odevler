#include <iostream>
using namespace std;
enum bolumler {bilgisayar, bilisim ,yazılım} bolum;
int main()
{
    setlocale(LC_ALL, "Turkish");

    bolum = bilgisayar;
    cout << bolum;

    bolum = static_cast<bolumler>(bolum +1);
    cout << bolum;

    system("pause");

    return 0;
}
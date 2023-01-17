#include <iostream>
using namespace std;
int main ()
{
    float vize, fnl;
    char yanit = 'e';
    for (; ;)
    {
        cout << " vize final giriniz ";
        cin >> vize >> fnl;
        float ortalama = vize * .5 + fnl * .6;
        cout << ortalama << endl;
        do{
            cout << "devam (e/h)",
            cin >> yanit;

        }while (!((yanit == 'e')||(yanit == 'h')));
        if ( yanit == 'h')
        break;

    }return 0;
}
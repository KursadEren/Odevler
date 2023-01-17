#include <iostream>
using namespace std;
struct ogrenci {
     string ad;
     string soyad;
     int vize;
     int final;

};
int main()
{ 
    ogrenci ogrNot;
    double basari;
    cout << " öğrenci adını giriniz " << endl;
    cin >> ogrNot.ad;
    cout << endl << " öğrencini soyadını giriniz \n";
    cin >> ogrNot.soyad;
    cout << " vize notunu giriniz \n";
    cin >> ogrNot.vize;
    cout << " final notunu giriniz \n";
    cin >> ogrNot.final;
    cout << endl << " Öğrenci bilgilerini giriniz \n";
    cout << ogrNot.ad << '\t' << ogrNot.soyad << '\t' << ogrNot.vize << '\t' << ogrNot.final << endl;
    basari = 0.4 * ogrNot.vize + 0.6 * ogrNot.final;
    if (basari > 50)
    cout << " basari notunuz: " << basari << '\t' << " geçtiniz \n";
    else 
                                                  cout << " basari notunuz: " << basari << '\t' << "seneye \n";
    system("pause"); return 0;
    
    
    
     
}
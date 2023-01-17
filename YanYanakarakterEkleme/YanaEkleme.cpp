/**********************************************************************
 *                 SAKARYA ÜNIVERSITESI                                *
 *              BILGISAYAR MUHENDISLIGI BOLUMU                         *
 *                  PROGRAMLAMAYA GIRIS                                * 
 *                                                                     *
 *                    KURSAD EREN MADEN                                *
 *                    G211210049                                       *
 *                    2A                                               *
 *                                                                     *
 * ********************************************************************/
#include <iostream>
#include <string>
#include <string.h>
#include <cstdlib>
#include <windows.h>
using namespace std;
class Karakterler                     
{
public:

    char	DUZCIZGI = 205;                               //istenilen yazdırma için veriler
    char	SOLUSTKOSE = 201;
    char	SAGUSTKOSE = 187;
    char	DIKEYCIZGI = 186;
    char	ASAGIAYRAC = 203;
    char	SOLALTKOSE = 200;
    char	SAGALTKOSE = 188;
    char	YUKARIAYRAC = 202;

    

    int a=0;
    int b=0;

    


};
class Katarlar : public Karakterler
{
private:
    int sayi=0;                              
    int sayi2=0;                         //kullanılan degiskenler
    int Rastgelesayi;
    int secim=0;
    int control=0;
    
    string harftutan[50] = { };
    string harfler[26] = { "A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","R","S","T","U","Q","V","W","X","Y","Z" };

public:
    
    void setrandomsayi()
    {
        for (int toplamadet = 0; toplamadet < 50; toplamadet++)
        { 
            Rastgelesayi = rand() % 26;                                          // harfleri random diziye sıralar
            harftutan[toplamadet] = harfler[Rastgelesayi];
        }
    }





    void karakterekleme()    //karakter ekleme islemini secerse burdaki fonk. calisir
    {

        cout << " onceki durumdaki karakter sayisi " << sayi2 << endl;                       
        sayi++;
        sayi2++;

        if (a==0 && sayi2 <= 50)       
        {
           
                if (control == 0 && sayi2 == 1)
                {
                    cout << SOLUSTKOSE << DUZCIZGI << SAGUSTKOSE << endl;                  //  burdaki if else yapısının dogru kısmı tek bir defa 
                    cout << DIKEYCIZGI << " " << DIKEYCIZGI << endl;                       // yazılacagından for dongusu kullanılmadı
                    cout << SOLALTKOSE << DUZCIZGI << SAGALTKOSE << endl;

                    sayi--;
                }
                else
                {
                    for(int yazdirmasatiri1_1=0; yazdirmasatiri1_1<sayi;yazdirmasatiri1_1++)
                          cout << SOLUSTKOSE << DUZCIZGI << DUZCIZGI << SAGUSTKOSE ;                    // yanyan kutu yazdırmak iciin for dongusu kullanildi

                       cout << endl;

                    for(int yazdirmasatiri1_2=0; yazdirmasatiri1_2<sayi;yazdirmasatiri1_2++)
                          cout << DIKEYCIZGI << harftutan[yazdirmasatiri1_2] << " " << DIKEYCIZGI  ;

                        cout << endl;

                    for(int yazdirmasatiri1_3=0; yazdirmasatiri1_3<sayi;yazdirmasatiri1_3++)
                          cout << SOLALTKOSE << DUZCIZGI << DUZCIZGI << SAGALTKOSE ;

                          cout << endl;
                }
            
            cout << "sonraki durum karakter sayisi =" << sayi2 << endl;
            
                for(int yazdirmasatiri2_1 =0; yazdirmasatiri2_1 <sayi2; yazdirmasatiri2_1++)
                {
                       cout << SOLUSTKOSE << DUZCIZGI << DUZCIZGI << SAGUSTKOSE ;
                }
                cout << endl;

                for(int yazdirmasatiri2_2 =0; yazdirmasatiri2_2 <sayi2; yazdirmasatiri2_2++)                      // yanyan kutu yazdırmak iciin for dongusu kullanildi
                {
                     cout << DIKEYCIZGI << harftutan[yazdirmasatiri2_2] << " " << DIKEYCIZGI ;
                }
                cout << endl;

                for(int yazdirmasatiri2_3 =0; yazdirmasatiri2_3 <sayi2; yazdirmasatiri2_3++)
                {
                       cout << SOLALTKOSE << DUZCIZGI << DUZCIZGI << SAGALTKOSE ;
                }
                cout << endl;
        }
        else
        {
            cout << " karakter eklenemez" << endl;              // harf adedi 50 olunca basılır kullanıcıyı uyarır
            sayi2--;
        }
    }


        void karaktercikarma()   // secime gore karakter cikarilmasi burdan yapılır
        {
            if (sayi > 0)
            {
                cout << " onceki durumdaki karakter sayisi " << sayi2 << endl;
                for(int cikarmasatiri1 =0;  cikarmasatiri1 <sayi2; cikarmasatiri1++)
                    cout << SOLUSTKOSE << DUZCIZGI << DUZCIZGI << SAGUSTKOSE ;
                    cout << endl;

                for(int cikarmasatiri2=0; cikarmasatiri2 <sayi2 ; cikarmasatiri2++)
                    cout << DIKEYCIZGI << harftutan[cikarmasatiri2] << " " << DIKEYCIZGI ;                     // yanyan kutu yazdırmak iciin for dongusu kullanildi
                    cout << endl;

                for(int cikarmasatiri3 =0; cikarmasatiri3 <sayi2 ; cikarmasatiri3++)
                    cout << SOLALTKOSE << DUZCIZGI << DUZCIZGI << SAGALTKOSE ;
                    cout <<endl;
                
                cout << "sonraki durum karakter sayisi =" << sayi << endl;
                


                    if (a == 0 && sayi2 == 1)
                    { 
                        for(int cikarmasatiri21=0; cikarmasatiri21 <sayi ;cikarmasatiri21++)
                                    cout << SOLUSTKOSE << DUZCIZGI << SAGUSTKOSE ;
                                    cout << endl;

                        for(int cikarmasatiri22=0; cikarmasatiri22 <sayi ;cikarmasatiri22++)                              // yanyan kutu yazdırmak iciin for dongusu kullanildi
                                    cout << DIKEYCIZGI << DIKEYCIZGI ;
                                    cout << endl;

                        for(int cikarmasatiri23=0; cikarmasatiri23 <sayi2 ; cikarmasatiri23++)
                                    cout << SOLALTKOSE << DUZCIZGI << SAGALTKOSE << endl;
                                    cout << endl;

                        sayi--;
                    }
                    else
                    {
                         for(int cikarmasatiri31=0; cikarmasatiri31 <sayi ;cikarmasatiri31++)
                                cout << SOLUSTKOSE << DUZCIZGI << DUZCIZGI << SAGUSTKOSE ;
                                cout << endl;

                         for(int cikarmasatiri32=0; cikarmasatiri32 <sayi ;cikarmasatiri32++)     
                                cout << DIKEYCIZGI  << harftutan[cikarmasatiri32] << " " << DIKEYCIZGI ;                        // yanyan kutu yazdırmak iciin for dongusu kullanildi
                                       cout << endl;

                         for(int cikarmasatiri33=0; cikarmasatiri33 <sayi ;cikarmasatiri33++)
                                cout << SOLALTKOSE << DUZCIZGI << DUZCIZGI << SAGALTKOSE ;

                                cout << endl;
                    }
            }
            else
            {
                cout << "silinecek karakter yok";    // bütün karakterler bittiginde ekrana basar
                sayi++;
                sayi2++;
            }
            sayi2--;
            sayi--;
            }
   
    void programdancik()
    { 
            exit(0);
    }

};

int main()
{   
    Katarlar giris;         // nesne degiskeni
    int secim = 0;          //tercih 
    
    giris.setrandomsayi();
    
    
    for (;;)
    {
       system("cls");
        cout << endl <<
            "\t karakter ekle => 1\n "
            "\t karakter cikar => 2\n "
            "\t programdan cik  => 3\n ";

        cout << " islem seciniz" << endl;
        cin >> secim;
        if (secim == 1)
        {
            giris.karakterekleme();                  //secim kismidir kullanici buradan yonlendirilir
        }
        if (secim == 2)
        {
            giris.karaktercikarma();
        }
        if (secim == 3)
        {
            giris.programdancik();
        }
        if(secim!=1 && secim!=2 && secim!=3)
          cout << " hatali sayi ";

        
    }

    
}
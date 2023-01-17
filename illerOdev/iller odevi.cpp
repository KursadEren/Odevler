/**************************************************************************
*                            SAKARYA ÜNİVERSİTESİ
*                    BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ
*                        BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ 
*                         PROGRAMLAMAYA GİRİŞ DERSİ
*
*                         ÖDEV NUMARASI   1
*                         ÖĞRENCİ ADI     Kürşad eren MADEN
*                         ÖĞRENCİ NO      G211210049
*                         DERS GRUBU      2A
*****************************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string.h>
#include <locale.h>
using namespace std;
int main()
{
    
    setlocale(LC_ALL, "Turkish");
    string toplamaliste = "";
    string illerrandomdize[15];   
    int indis[14] = { 0 };
    string türkiyeilleri[81] = { "Adana", "Adıyaman", "Afyonkarahisar", "Ağrı", "Aksaray", "Amasya", "Ankara", "Antalya", "Ardahan", "Artvin", "Aydın", "Balıkesir",
     "Bartın", "Batman", "Bayburt", "Bilecik", "Bingöl", "Bitlis", "Bolu", "Burdur", "Bursa", "Çanakkale", "Çankırı", "Çorum", "Denizli", "Diyarbakır", "Düzce", "Edirne", 
     "Elazığ", "Erzincan", "Erzurum", "Eskişehir", "Gaziantep", "Giresun", "Gümüşhane", "Hakkâri", "Hatay", "Iğdır", "Isparta", "İstanbul", "İzmir", "Kahramanmaraş", "Karabük", 
     "Karaman", "Kars", "Kastamonu", "Kayseri", "Kilis", "Kırıkkale", "Kırklareli", "Kırşehir", "Kocaeli", "Konya", "Kütahya", "Malatya", "Manisa", "Mardin", "Mersin", "Muğla", "Muş", 
     "Nevşehir", "Niğde", "Ordu", "Osmaniye", "Rize", "Sakarya", "Samsun", "Şanlıurfa", "Siirt", "Sinop", "Sivas", "Şırnak", "Tekirdağ", "Tokat", "Trabzon", "Tunceli", "Uşak", 
     "Van", "Yalova", "Yozgat", "Zonguldak"};

       int kucuk = türkiyeilleri[0].length();
       for(int kucukil=0; kucukil<81; kucukil++)  //en kısa ilin harf bulmak için yazılan kod bloğu 
       {
              if(kucuk > türkiyeilleri[kucukil].size())
                 kucuk = türkiyeilleri[kucukil].size();
       }

       int buyuk = türkiyeilleri[0].length();
       for(int buyukil = 0; buyukil<81; buyukil++ )      //en uzun ilin harf sayısını bulmak için yazılan kod bloğu
       {
              if(buyuk < türkiyeilleri[buyukil].size())
                 buyuk = türkiyeilleri[buyukil].size(); 
       }

       cout << "en kucuk harfli il sayisi " << kucuk << endl;    // en uzun ve en kısa ilin harf sayısını yazdıran kodlar
       cout << "en buyuk harfli il sayisi " << buyuk << endl;

       int denetleme = 0;
       for ( int don_gü = kucuk; don_gü< buyuk+1; don_gü++)   // 3 haneliden 14 haneliye indis denemek için  
       { 
               cout << don_gü << ";";
               if(denetleme == 0 && don_gü>=kucuk)   // 14 hanedliden fazla olunca çalışmaz devam etmek için karar yapısı
                  cout << "haneli sehir bulunamadi" << endl;
               
                for (int denemesayi = 0; denemesayi<100000; denemesayi++) //100000 kere denemek için  
                {
                        int denetleme =0;

                        for(int randomsecme=0; randomsecme < don_gü; randomsecme++) //      random olarak il seçmek için 
                    {
                            illerrandomdize[randomsecme] = türkiyeilleri[rand() %81]; // illeri random olarak seçip dizeye atar

                    }
                     int min_il = illerrandomdize[0].length();          //min_il e illerrandomdize dizesinin ilk elemanın uzunluğu atanır 
                     for (int iluzun = 0; iluzun < don_gü; iluzun++)         
                    {
                           if(min_il > illerrandomdize[iluzun].length()) //sırayla şehir uzunluklarını min_il e atar    
                              min_il = illerrandomdize[iluzun].length();
                    }
                      for (int iluzun = 0; iluzun < min_il; iluzun++)  
                       {
                            toplamaliste = "";
                            for(int secme=0; secme<don_gü; secme++)
                            toplamaliste += illerrandomdize[secme].at(iluzun);  //at iluzun a başvuru döndürür

                         for (int atama = 0; atama<81; atama++)
                         {
                                 if (türkiyeilleri[atama] == toplamaliste) //toplam liste dizesine seçilen illeri atar 
                                {
                                       cout << toplamaliste << endl;
                                       denetleme =1;
                                }
                             
                         }
                         
                        }
                     if(denetleme == 1)
                     break;
                  } 
       }
}














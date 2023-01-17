//chcount.cpp girilen kelimelerin karakterlerin syısını bulur
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int chcount = 0;    //boşluk dışındaki karakter sayısı
    int wdcount = 1;    // kelimelerin arasındaki boşlukların sayısı
    char ch = 'a';       // karakterin 'r' olmadığını garantilemek için

    cout << " enter a phrase: ";
     while(ch != '\r')    // enter girilene kadar döngüye devam et 
     {
         ch = getche();     //bir karakter oku
         if( ch==' ' )     // boşluksa
         wdcount++;
         else
         chcount++;
     }
     cout << " \n words=" << wdcount << endl
     <<" letters= "<< (chcount-1) << endl;
     return 0;
}
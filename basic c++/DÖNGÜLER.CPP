#include <iostream>
using namespace std;
int main()
{
    float sayi1, sayi2;
    int secim; 
    char ch = 'a';
    int control=0;
    do{
        do{
                    cout << " seçiminiz ? (1-3) " << endl; 
                    cout << " 1- harf ekleme "; 
                    cout << " 2- harf çıkarma ";  
                    cout << " 3-programdan çık"; 
                
                    cout << " seçiminiz ? (1-5) "; 
                    cin >> secim  

   

                     
        }while (secim < 0 || secim > 4);
        switch (secim)
        {
        
        case 1:
            cout << sayi1 << " - " << sayi2 << " = " << sayi1 - sayi2 << endl;
            break;
        case 2:
            cout << sayi1 << " * " << sayi2 << " = " << sayi1 * sayi2 << endl;
            break;
        case 3:
            goto: tek;
            break;
            defaut:
            cout << " select correct item ....." << endl;
            
      


        
        }
        cout << " başka işlem yapılacak mı ? (y/n)"; cin >> ch;
    }
    while (secim<4 && secim > 0 && control ==1);
     return 0;
    tek:
}
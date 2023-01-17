//adifelse.cpp
//macera oyunu ie if else yapısı
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    char dir ='a';
    int x=10,y=10;

    cout << " type enter to quit\n" ;

    while ( dir != 'r')
    {
        cout << "\your location is " << x << "," << y;
        cout << "\n press direction key (n,s,e,w): ";
        dir=getche();
            if(dir=='n')
                   y--;
          else
             if(dir=='s')
                   y++;
          else
             if(dir=='e')
                   x++;
          else
              if(dir=='w')
              x--;
  
    }return 0;
    
}
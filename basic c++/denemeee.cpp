#include <iostream>
#include <stdlib.h> // system("CLS") fonksiyonu için.

using namespace std;

int main(){



char	DUZCIZGI = 205;	
char	SOLUSTKOSE = 201;	
char	SAGUSTKOSE = 187;	
char	DIKEYCIZGI = 186;
char	ASAGIAYRAC = 203;	
char	SOLALTKOSE = 200;	
char	SAGALTKOSE = 188;	
char	YUKARIAYRAC = 202;	



 
 int x, y, z, sonuc;
 
 while (1) {
  cout << endl << 
   "\t Toplama => 1\n "
   "\t Cikarma => 2\n "
   "\t Carpma  => 3\n "
   "\t Bolme   => 4\n "
   "\t Cikis   => 0\n\n ";
     
  cout << "Islemi seciniz:: ";
  cin >> z;
  int sayi=0,secim=0,atama;
  
  if (z == 0)
   goto label; // z'nin 0 olması dırımında programı sonlandır.
     
  
  switch(z){
   case 1: {
	   atama=sayi;
	   sayi++;
	   for(secim=0;secim<sayi;secim++){
     cout << SOLUSTKOSE << DUZCIZGI << DUZCIZGI << SAGUSTKOSE << endl;
	 cout << DIKEYCIZGI << "  " <<  DIKEYCIZGI << endl;
     cout << SOLALTKOSE << DUZCIZGI << DUZCIZGI << SAGALTKOSE << endl;
	 sayi=atama;
	   }
     break;

   }
   case 2: {
	   sayi--;
	   for(secim=0;secim<sayi;secim++){
     cout << SOLUSTKOSE << DUZCIZGI << DUZCIZGI << SAGUSTKOSE << endl;
	 cout << DIKEYCIZGI << "  " <<  DIKEYCIZGI << endl;
     cout << SOLALTKOSE << DUZCIZGI << DUZCIZGI << SAGALTKOSE << endl;
	 
	   }
     break;
   }
   case 3: {
    
    break;
   }
  
 
   default: {
    system("CLS");
    cout << endl << "Yanlis bir secim yaptiniz!" << endl;
   }
  }
 }
 
label:; 

 return(0);
}
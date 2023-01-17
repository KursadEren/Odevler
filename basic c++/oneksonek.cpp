#include <iostream>
using namespace std;
int main()
{
    int count = 10;
    cout << " count = " << count << endl;
    cout << " count = " << ++count << endl;
    cout << " count = " << count << endl;
    cout << " count = " << count++ << endl;
    cout << " count = " << count << endl;
    return 0;  
}//   ++ önde olması satırdaki işlmei yapmadan sayıyı artırıyor sona gelirse satırdaki işlemi öncelikli tutarak işlemden sonra sayıyı artırıyorm  
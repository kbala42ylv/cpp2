 /*
    Karşılaştırma Mantıksal Operatorleri

    Alıntı:
    Deneyap Yazılım Teknolojileri


                                            Kamil Bala

*/

#include <iostream>

using namespace std;

int main()
{
    int x = 5, y = 0;
    cout << ((x <= y) || (y>0)) << endl;
    cout << ((x > 4) && (y==0)) << endl;
    cout << (x && !y) << endl;
    cout << (!(x-2) || (y+2 > 2)) << endl;

    return 0;

}


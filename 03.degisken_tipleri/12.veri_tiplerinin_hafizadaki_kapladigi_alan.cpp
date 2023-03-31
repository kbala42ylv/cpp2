 /*
    Değişkenlerin Hafizada ki Kapladiklari Alanlar

                                Kamil Bala
*/

#include <iostream>
using namespace std;

int main()
{
    double sayi;
    cout << "Double boyutu: " << sizeof(sayi) << endl;
    cout << "Bool boyutu: " << sizeof(bool) << endl;
    cout << "Char boyutu: " << sizeof(char) << endl;
    cout << "Integer boyutu: " << sizeof(int) << endl;
    cout << "Float boyutu: " << sizeof(float) << endl;
    cout << "2 adet Float boyutu: " << 2 * sizeof(float) << endl;
    cout << "wide karakter boyutu: " << sizeof(wchar_t) << endl;

return 0;
}

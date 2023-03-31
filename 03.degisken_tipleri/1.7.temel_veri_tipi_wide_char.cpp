 /*
    wide character veri tipi

                                Kamil Bala
*/

#include <iostream>
using namespace std;

int main()
{

    cout<<"---wide character veri tipi---"<<endl;

    // wchar_t veri tipi (2 byte)
    cout << "wchar_t boyutu: " << sizeof(wchar_t) << endl;


    //String	32	byte	-
    // Karakter dizisi, bir	veya birden fazla char

    wchar_t wc1 = 'a';
    wchar_t wc2 = 'A';
    wchar_t wc3 = 'AB';
    wchar_t wc4 = '1';
    wchar_t wc5 = '10';
    wchar_t wc6 = 'ArZ5';

    cout << "wc11: " << wc1 << endl;
    cout << "wc12: " << wc2 << endl;
    cout << "wc13: " << wc3 << endl;
    cout << "wc14: " << wc4 << endl;
    cout << "wc15: " << wc5 << endl;
    cout << "wc16: " << wc6 << endl;


    return 0;
}

 /*
    Karşılaştırma operatörleri

    İki değeri (veya değişkeni) karşılaştırmak için kullanılır. Bu, programlamada önemlidir,
    çünkü cevapları bulmamıza ve karar vermemize yardımcı olur.

    Bir karşılaştırmanın dönüş değeri, doğru (1) veya yanlış (0) anlamına gelir.


                                            Kamil Bala

*/

#include <iostream>

using namespace std;

int main()
{

    int a = 20;
    int b = 10;
    int c = 3;
    int d = 3;

    cout<<"a sayisi b sayisindan buyuktur (a > b):"<< (a > b) <<endl;

    cout<<"c sayisi c sayisindan kucuktur (c < b):"<< (c < b) <<endl;

    cout<<"c ve d sayilari esittir c == d):"<< (c == d) <<endl;

    cout<<"a sayisi c sayisindan farklidir (a != c):"<< (a != c) <<endl;

/*
    int x = 5, y = 4;
    cout << (x < y) << endl;
    cout << (x > y) << endl;
    cout << ((x-1) <= y) << endl;
    cout << (x >= (y+2)) << endl;
    cout << (x == y) << endl;
    cout << (x != y) << endl;
*/
    return 0;

}


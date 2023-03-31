 /*
    short int Veri Tipi

    Short veri tipi, int veri tipinin yarısı boyutunda, yani 2 bayttır.
    -32,768 ile 32,767 arasında değer alabilir.
    Nispeten küçük değerleriniz olduğunda, bu tür daha kullanışlıdır.
    Bellek açısından baktığımız zaman int türünün sadece yarısını kapladığı için
    iki kat daha verimli olmaktadır.

                                            Kamil Bala
    Alıntı:
    Deneyap Yazılım Teknolojileri
*/

#include <iostream>

using namespace std;

int main()
{
    short int sayi = 5;
    // short sayi = 5;   // tanım olarak kullanılabilir. Aynı anlamda kullanılır
    cout << sayi;


    return 0;

}


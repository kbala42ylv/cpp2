 /*
    Double Veri Tipi

    Double veri tipi 8 bayt uzunluğundadır.

    Ondalık kısmında genel olarak 16 basamak hassasiyete sahiptir.

    Virgüllü sayıların kullanımında bilimsel gösterim kullanılabilir:

    2.2748e+21 		-3.15479e+3
    342.234e-14 		 44.78e-13


                                            Kamil Bala
    Alıntı:
    Deneyap Yazılım Teknolojileri
*/

#include <iostream>
using namespace std;

int main()
{
    double sayi1 = 2.2e-308;
    double sayi2 = -2.3e-308;
    cout << "Sayi 1: " << sayi1 << "\nSayi 2: " << sayi2;

    return 0;
}


/*
    1 ile 10 arasında ki sayıların toplamı

                                                                Kamil Bala
*/
#include<iostream>
using namespace std;

int sayac = 1;
int toplam = 0;

int main()
{
    basla:// etiket tanımlıyoruz
    if (sayac < 11) // n* (n+1) /2
    {
       //toplam = toplam + sayac;
       toplam += sayac;
       sayac++;
    }
    goto basla;

    cout<< "1 ile 10 arasi sayilarin toplami"<<toplam<<endl;
    return 0;
}

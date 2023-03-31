/*
    1 ile 10 arasında ki sayıların toplamı - while dongusu

                                                                Kamil Bala
*/
#include<iostream>
using namespace std;

int sayac = 1;
int toplam = 0;

int main()
{
    while(sayac<11)
    {
       toplam = toplam + sayac;
       sayac++;
    }


    cout<< "1 ile 10 arasi sayilarin toplami:"<<toplam<<endl;
    return 0;
}

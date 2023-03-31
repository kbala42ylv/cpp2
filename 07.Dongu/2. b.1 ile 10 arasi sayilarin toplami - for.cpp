/*
    1 ile 10 arasında ki sayıların toplamı - for dongusu

                                                                Kamil Bala
*/
#include<iostream>
using namespace std;

int sayac = 1;
int toplam = 0;

int main()
{
    for(int sayac=1;sayac<11;sayac++)
    {
       toplam = toplam + sayac;
    }


    cout<< "1 ile 10 arasi sayilarin toplami:"<<toplam<<endl;
    return 0;
}

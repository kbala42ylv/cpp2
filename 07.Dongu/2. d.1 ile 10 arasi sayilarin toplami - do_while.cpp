/*
    1 ile 10 arasında ki sayıların toplamı - do while dongusu

                                                                Kamil Bala
*/
#include<iostream>
using namespace std;

int sayac = 1;
int toplam = 0;

int main()
{
    do
    {
       toplam = toplam + sayac;
       sayac++;
    }while(sayac<11);


    cout<< "1 ile 10 arasi sayilarin toplami:"<<toplam<<endl;
    return 0;
}

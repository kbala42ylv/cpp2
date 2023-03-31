/*
    Rastgele girilen N sayinin aritmetik,geometrik ve harmonik ortalamasini bulan program

                                                                Kamil Bala

*/

#include<iostream>
using namespace std;

#include<math.h>

int main()
{

    int adet;

    float sayi,kareToplam=0;

    cout<<"Kac adet sayi toplayacaksiniz:";cin>>adet;

    for(int sayac=1; sayac<=adet;sayac++)
    {

        cout<<sayac<<". sayiyi girin:";cin>>sayi;

        // Her girilen sayinin karesi oncekilerle toplaniyor

        kareToplam=kareToplam+sayi*sayi;

    }

    cout<<"\n*** Sonuc ***\n"<<endl;

    cout<<"\nKarelerinin Toplami:"<<kareToplam<<endl;

    return 0;

}

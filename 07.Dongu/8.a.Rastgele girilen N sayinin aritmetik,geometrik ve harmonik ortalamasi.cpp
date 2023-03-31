/*
    Rastgele girilen N sayinin aritmetik,geometrik ve harmonik ortalamasini bulan program

                                                                Kamil Bala

*/

#include<iostream>
using namespace std;

#include<math.h>

int main()
{

    int adet,sayi,toplam=0,carpim=1;

    float tersToplam=0,aritmetikOrtalama;

    float geometrikOrtalama,harmonikOrtalama;

    cout<<"Kac sayi gireceksiniz:";cin>>adet;

    for(int sayac =1; sayac<=adet; sayac++)
    {
        cout<<sayac<<". sayiyi girin:";cin>>sayi;
        toplam+=sayi;
        carpim*=sayi;
        tersToplam=tersToplam+1/sayi;
    }

    // Sonuc hesaplamalari

    aritmetikOrtalama=toplam/adet;

    geometrikOrtalama=exp((1/adet)*log(carpim));

    harmonikOrtalama=adet/tersToplam;

    cout<<"\n*** Sonuc ***\n";

    cout<<"\nAritmetik Ortalama:"<<aritmetikOrtalama<<endl;

    cout<<"\nGeometrik Ortalama:"<<geometrikOrtalama<<endl;

    cout<<"\nHarmonik  Ortalama:"<<harmonikOrtalama<<endl;

    return 0;

}

/*
    Rastgele girilen N sayinin en buyugunu bulan program

                                                                Kamil Bala

*/

#include<iostream>
using namespace std;

int main()
{
    int adet,sayi,enBuyuk;

    cout<<"Kac sayi gireceksiniz:";cin>>adet;

    cout<<"\n1.sayiyi girin:";cin>>sayi;

    //Birinci sayi en buyuk sayi olarak kabul ediyoruz

    enBuyuk=sayi;

    // Diger sayilar giriliyor

    for(int sayac=2;sayac<=adet;sayac++)
    {
        cout<<sayac<<".sayiyi girin:";cin>>sayi;

        //Yeni sayi ENBuyuk’ten buyukse,EnBuyuk sayiya atanir

        if (enBuyuk<sayi) (enBuyuk=sayi);
    }

    cout<<"\nEn buyuk sayi:"<<enBuyuk<<endl;

    return 0;

}

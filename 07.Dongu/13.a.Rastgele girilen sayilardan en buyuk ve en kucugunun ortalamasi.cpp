/*
    Rastgele girilen N sayýdan en büyük ve en küçüðünü bularak, bunlarýn ortalamasýný
    bulan program
                                                                Kamil Bala

*/

#include<iostream>
using namespace std;

int main()
{
    int adet,sayi,enBuyuk,enKucuk, ortalama;

    cout<<"Kac sayi gireceksiniz:";cin>>adet;

    cout<<"1.sayiyi girin:";cin>>sayi;

    // 1. sayi en buyuk ve en kucuk sayi varsayiliyor

    enBuyuk=sayi;

    enKucuk=sayi;

    for(int sayac=2; sayac<=adet;sayac++)
    {

        cout<<sayac<<".sayiyi girin:";cin>>sayi;

        //Girilen sayi EnBuyuk’ten daha buyukse onu EnBuyuk’e ata

        if (enBuyuk<sayi) (enBuyuk=sayi);

        // Girilen sayi EnKucuk’ten daha kucukse onu EnKucuk’e ata

        if (enKucuk>sayi) (enKucuk=sayi);

    }

    cout<<"\nEn buyuk sayi:"<<enBuyuk<<endl;

    cout<<"\nEn kucuk sayi:"<<enKucuk<<endl;

    ortalama=(enBuyuk+enKucuk)/2;

    cout<<"\n\nEn buyuk ve en kucuk sayilarin ortalamasi:"<<ortalama<<endl;

    return 0;

}

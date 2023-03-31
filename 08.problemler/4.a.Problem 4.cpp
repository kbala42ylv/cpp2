/*
    100’e kadar olan asal sayilari bulan program. 2,3,5,7 kullanarak cozum
                                                                Kamil Bala

*/

#include<iostream>
using namespace std;

#include<math.h>


int main()
{
    int Adet,Sayi,Sayac,Cift;

    int UcKat, TekToplam,CiftToplam;

    cout<<"Kac sayi gireceksiniz:";cin>>Adet;

    Sayac=0;
    do
    {
        Sayac++;
        cout<<Sayac<<".sayiyi giriniz:";cin>>Sayi;
        UcKat=Sayi%3;
        if (UcKat==0)
        {
            Cift=Sayi%2;

            if (Cift==0) CiftToplam=CiftToplam+Sayi;

            else TekToplam=TekToplam+Sayi;
        }
    } while (Sayac<Adet);

    cout<<"\n3’un katlarindan, teklerin toplami:"<<TekToplam;
    cout<<"\n3’un katlarindan, ciftlerin toplami:"<<CiftToplam;


    return 0;

}

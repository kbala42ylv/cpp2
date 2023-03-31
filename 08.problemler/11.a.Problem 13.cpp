/*
    ln(1+x)=x-x2/2+x3/3-x4/4+x5/5-… olduðuna göre kullanýcýnýn belirliyeceði
    terim adeti kadar girilen sayý kadar hesaplama yapar.

                                                                Kamil Bala

*/

#include<iostream>
using namespace std;

#include<math.h>

int main()
{

    float x,Terim,Carp,Sayac,Sonuc,Cift;

    cout<<"ln(1+x) denkleminde ";

    cout<<"x sarti -1<x ve x<=1 olmalidir.\n\n x:";cin>>x;

    cout<<"\nDenklemi kac terimle hesapliyacaksiniz:";cin>>Terim;

    Sayac=0;

    Sonuc=0;

    while(Sayac<Terim)
    {

        Sayac++;

        Cift=2*floor(Sayac / 2);

        /* Sayi cift ise -1 ile tek ise 1 ile carp */

        if (Cift==Sayac) Carp=-1; else Carp=1;

        /* Denklem */

        Sonuc=Sonuc+Carp* pow(x,Sayac)/Sayac;

        /* Her bir adimda sonucun gorulmesi icin */

        cout<<"\nSonuc:"<<Sonuc;
    }

    cout<<"\n\n";

    return 0;

}

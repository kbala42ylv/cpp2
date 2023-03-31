/*

    ex sayýsýný Taylor serisi ile açýlýmý ex =1+x+x2/2!+x3/3!+… olduðuna göre
    kullanýcýnýn belirliyeceði terim adeti kadar girilen sayý kadar hesaplama yapar.

                                                                Kamil Bala

*/

#include<iostream>
using namespace std;

int main()
{
    float X,X_Kuvvet,Fakt,Adet;

    float Sayac,e,y;

    Sayac=0;

    X_Kuvvet=1;Fakt=1; e=1;

    cout<<"e ussu kac hesaplayacaksiniz:";cin>>X;

    cout<<"Kac terimle hesaplamak istersiniz:";cin>>Adet;



    //OnSayac yalnizca for dongusu icindir

    for(int OnSayac=1;OnSayac<=Adet;OnSayac++)

    {

        // Sayac float islemlere katilmasi icin ayri sayac olarak dusunulmustur

        Sayac++;

        X_Kuvvet=X_Kuvvet*X;

        Fakt=Fakt*Sayac;

        e=e+X_Kuvvet/Fakt;

        /* Her adim sonunda ki islem gorunmesi icin

        asagida ki satir hazirlanmistir */

        cout<<"Sayac:"<<Sayac<<" X_Kuvvet:"<<X_Kuvvet;

        cout<<" Fakt:"<<Fakt<<" e ussu x:"<<e<<"\n";

    }



    /* Sonuc */

    cout<<"\n"<<Adet<<" terimle e ussu "<<X<<"="<<e<<"\n\n";



    /* Sonucun dogrulugu terimi sayisini arttirdikca artacaktir. */

    return 0;

}

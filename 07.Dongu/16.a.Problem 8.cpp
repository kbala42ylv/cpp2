/*
    Tutulan sayının tahmini bulmak için sayıdan küçük yada büyük olduğunu yazdırarıp,
    sayıyı bulduğunda tebrik yazısı ile birlikte kaç tahminde bulduğunu yazdıran program.

                                                                Kamil Bala

*/

#include<iostream>
using namespace std;

int main()
{
    int Tahmin,Sayi,Adet;

    cout<<"1. kullanici.\n\n";

    cout<<"Tutmak istediginiz sayi:";cin>>Sayi;

    Adet=1;

    cout<<"\n\n2.kullanici.";

    cout<<"Tahmininiz:";cin>>Tahmin;

    while (Tahmin!=Sayi)
    {
        if (Tahmin<Sayi)  cout<<"\nDaha buyuk sayi giriniz.\n";

        else  cout<<"\nDaha kucuk sayi giriniz.\n";

        Adet++;

        cout<<"\nTahmininiz:";cin>>Tahmin;

    }

    cout<<"\nTebrikler! "<<Adet<<" tahminde bildiniz.\n\n";

    return 0;

}

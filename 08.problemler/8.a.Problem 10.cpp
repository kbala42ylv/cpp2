/*
    Başlangıç olarak ilk iki elemanı verilen Fibonacci dizisinin istenen elemanına
    kadar yazdıran program.
                                                                Kamil Bala

*/

#include<iostream>
using namespace std;

int main()
{
    int Birinci,Ikinci,Yeni,Sayi,Sayac;

    cout<<"Birinci elemani girin:";cin>>Birinci;

    cout<<"\nIkinci elemani girin:";cin>>Ikinci;

    Sayac=3;

    cout<<"\nFiboncci dizisinin kacinci elemanina\n";

    cout<<"kadar hesaplamak istersiniz:";cin>>Sayi;

    cout<<"\n\n";

    cout<<Birinci<<" "<<Ikinci<<" ";

    Artim:

    Yeni=Birinci+Ikinci;

    cout<<Yeni<<" ";

    Birinci=Ikinci;

    Ikinci=Yeni;

    if (Sayi!=Sayac)
    {
        Sayac++;

        goto Artim;
    }

    cout<<"\n\n";

    return 0;

}

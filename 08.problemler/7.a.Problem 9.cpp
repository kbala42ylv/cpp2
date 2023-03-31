/*
    Fibonacci dizisi ‘1 1’ ile başlayan ve ardında ki dizi elemanlarını önceki iki sayının toplamı ile
    ‘1+1=2, 1+2=3, 2+3=5 vb.’ elde edilen dizidir. Fibonacci dizinin ilk oniki elemanını bulan programı yazınız.

                                                                Kamil Bala

*/

#include<iostream>
using namespace std;

int main()
{
    int Birinci,Ikinci,Yeni,Sayi,Sayac;

    Birinci=0;Ikinci=1;Sayac=1;

    cout<<"Fiboncci dizisinin kacinci elemanina\n";

    cout<<"kadar hesaplamak istersiniz:";cin>>Sayi;

    cout<<"\n\n";

    Artim:

    cout<<Ikinci<<" ";

    Yeni=Birinci+Ikinci;

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

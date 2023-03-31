/*
    Rastgele girilen N sayindan cift ve tek sayilarin adedlerini
    ve toplamlarini bulan program

                                                                Kamil Bala

*/

#include<iostream>
using namespace std;

int main()
{
    int adet, sayi;

    int ciftAdet=0, ciftToplam=0;

    int tekAdet=0, tekToplam=0;

    cout<<"Kac sayi gireceksiniz:";cin>>adet;

    for(int sayac=1; sayac<=adet; sayac++)
    {
        cout<<sayac<<". sayiyi girin:";cin>>sayi;

        if (sayi%2 == 0)
        {
            ciftAdet++;
            ciftToplam+=sayi;
        }
        else
        {
            tekAdet++;
            tekToplam+=sayi;
        }
    }
    cout<<"\n*** Sonuc ***\n";

    cout<<"\nCift sayilarin adedi:"<<ciftAdet<<endl;

    cout<<"\nCift sayilarin toplami:"<<ciftToplam<<endl;

    cout<<"\nTek sayilarin adedi:"<<tekAdet<<endl;

    cout<<"\nTek sayilarin toplami:"<<tekToplam<<endl;

    return 0;

}

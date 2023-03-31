/*
    100’e kadar olan asal sayilari bulan program. break ve continue kullanarak yapılan cozum.
                                                                Kamil Bala

*/

#include<iostream>
using namespace std;

#include<math.h>

int main()
{
    int Bolum,Kalan;

    for(int Sayac=2;Sayac<100;Sayac++)
    {

        for(int Kontur=2;Kontur<=Sayac;Kontur++)
        {
            Kalan=Sayac%Kontur;

            Bolum=floor(Sayac/Kontur);

            // Kendisinden once ki bir sayiya kalansiz

            // bolunurse tam sayi degildir

            if (Kontur<Sayac && Kalan==0) break;
            else
            {

            //Tam sayi kendisine yalnizca tam bolunur

            // Kalan==0 yuvarlamada 1 oldugu durumu kaldirmak

            // icin konuldu

            if (Bolum==1 && Kalan==0)

            cout<<Sayac<<":tam sayi\n";

            }

        }

        continue;

    }

    return 0;

}

/*
    Rakamlarinin kuplerinin toplami kendisine esit olan 1000’e kadar olan sayilari yazdirir.

                                                                Kamil Bala

*/

#include<iostream>
using namespace std;

#include<math.h>



int main()
{
    int Sayac,Adet=0,KupToplam;

    int Yuz,On,OnHane,Bir;

    for(int sayac=1;sayac<1000; sayac++)
    {
        if ( Sayac<100)
        {
            On=Sayac/10;
            Bir=Sayac%10;
            KupToplam=pow(On,3)+pow(Bir,3);

            if(Sayac==KupToplam)
            {
                cout<<"Sayi:"<<Sayac<<endl;

                Adet++;
            }
        }
        else
        {
            Yuz=floor(Sayac/100);
            OnHane=Sayac-100*Yuz;
            On=floor(OnHane/10);
            Bir=OnHane%10;
            KupToplam=pow(Yuz,3)+pow(On,3)+pow(Bir,3);
            if(Sayac==KupToplam)
            {
                cout<<"Sayi:"<<Sayac<<"\n";
                Adet++;

            }
        }
    }

    cout<<"\nAdet:"<<Adet<<endl;

    return 0;

}

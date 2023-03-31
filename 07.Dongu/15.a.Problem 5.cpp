/*
    Girilen N sayının 3 ile bölünenlerin arasında tek ve çiftleri ayrı ayrı sayılarını bulup,
     onnların toplamlarını bulan program
                                                                Kamil Bala

*/

#include<iostream>
using namespace std;

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
            //Cift sayilarin toplami
            if (Cift==0)
                CiftToplam=CiftToplam+Sayi;
            else // Degilse teklerin toplami
                TekToplam=TekToplam+Sayi;
        }

    } while (Sayac<Adet);


    cout<<"\n3 un katlarindan, teklerin toplami:"<<TekToplam;

    cout<<"\n3'un katlarindan, ciftlerin toplami:"<<CiftToplam;


    return 0;

}

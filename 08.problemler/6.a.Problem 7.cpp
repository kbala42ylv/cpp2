/*
    Kendini oluşturan rakamların faktöryellerinin toplamına eşit olan sadece 4 sayı vardır.
    Bunları bulan program.
                                                                Kamil Bala
    Devam ediyor
*/

#include<iostream>
using namespace std;

int main()
{
    float Sayac,FaktoryelToplam;

    float g,h,i,j,k,l,m;

    float F(float arg);

    Sayac=0;

    // Her bir satir degistiriliyor

    for (g=0;g<=9;g++)

    for (h=0;h<=9;h++)

    for (i=0;i<=9;i++)

    for(j=0;j<=9;j++)

    for(k=0;k<=9;k++)

    for(l=0;l<=9;l++)

    for(m=0;m<=9;m++)

    {

    //Birinci satir icin faktoryel hesabi

    if (g==0 & h==0 &i==0 &j==0 & k==0 & l==0) FaktoryelToplam=F(m);

    //İkinci satir icin faktoryel hesabi

    else if (g==0 &h==0 &i==0 &j==0 & k==0) FaktoryelToplam=F(l)+F(m);

    else if (g==0 &h==0 &i==0 &j==0) FaktoryelToplam=F(k)+F(l)+F(m);

    else if (g==0 &h==0 &i==0) FaktoryelToplam=F(j)+F(k)+F(l)+F(m);

    else if (g==0 &h==0) FaktoryelToplam=F(i)+F(j)+F(k)+F(l)+F(m);

    else if (g==0) FaktoryelToplam=F(h)+F(i)+F(j)+F(k)+F(l)+F(m);

    else FaktoryelToplam=F(g)+F(h)+F(i)+F(j)+F(k)+F(l)+F(m);

    if (FaktoryelToplam==Sayac) cout<<"Sayi:"<<Sayac<<"\n\n";

    Sayac++;

    }

    return 0;

}

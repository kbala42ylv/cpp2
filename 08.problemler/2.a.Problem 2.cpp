/*
    1000’e kadar tam kare olan sayilari bulan program
                                                                Kamil Bala

*/

#include<iostream>
using namespace std;

#include<math.h>

int main()
{


    int Sayac,Kare,KareKok;

    Sayac=0;

    Artim:

    Sayac++;

    KareKok=floor(sqrt(Sayac));

    Kare=KareKok*KareKok;

    if (Sayac==Kare)

    cout<<Sayac<<":tam kare\n";

    if (Sayac<1000) goto Artim;

    cout<<endl;

    return 0;

}

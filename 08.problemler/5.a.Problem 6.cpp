/*
    Verilen n sayısı için n’in değerini n çift iken n/2, n tek iken 3n+1 olarak belirleyen
    ve bu işlemi n=1 oluncaya kadar sürdüren bir program yazınız.
                                                                Kamil Bala

*/

#include<iostream>
using namespace std;

int main()
{
    int Sayi,Cift;

    cout<<"Bir sayi giriniz:";cin>>Sayi;

    Kontrol:
    Cift=Sayi%2;
    if (Cift!=0) /* Cift degilse */
    {
        Sayi=3*Sayi+1;
        cout<<Sayi<<"\n";
    }
    else
    {
        Sayi=Sayi/2;
        cout<<Sayi<<"\n";
    }
    if (Sayi!=1) goto Kontrol; /* Bire ulasmamissa Kontrol’e don */

    cout<<"\n\n";

    return 0;

}

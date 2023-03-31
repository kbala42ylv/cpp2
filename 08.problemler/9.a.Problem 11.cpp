/*

    ln2=1-1/2+1/3-1/4+1/5-… þeklindedir. Bu sayýnýn ilk 10 terimini alarak
    bu sayýyý hesaplayan programý yazýn.

                                                                Kamil Bala

*/

#include<iostream>
using namespace std;

int main()
{
    int Sinir,Cift,Carp;

    float ln2,Terim,Sayac;

    cout<<"\nln2 sayisini kacinci terime kadar hesaplamak istersiniz:"; cin>>Sinir;

    ln2=1; Sayac=2;

    for(int Sira=2;Sira<=Sinir;Sira++)
    {
        Cift=Sira%2;

        if (Cift==0) Carp=-1;

        else Carp=1;

        Terim=(Carp*(1/Sayac));

        ln2=ln2+Terim;

        cout<<"\n"<<Sira<<". terim:"<<" sonunda ln2:"<< ln2;

        Sayac++;
    }

    cout<<"\n\nln2 degeri "<<Sinir<<" terim ile ln2="<<ln2<<"\n\n";

    return 0;

}

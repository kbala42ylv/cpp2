/*
    Kullanicinin girecegi sayinin faktoryeli

                                                                Kamil Bala

*/

#include<iostream>
using namespace std;

int main()
{

    int sayi, faktoryel=1;

    cout<<"Kac sayisinin faktoryelini alacaksiniz:";cin>>sayi;

    for(int sayac=1; sayac<=sayi;sayac++)
    {

        // Faktoryel hesabinda sayi sinir degerine kadar

        // sayilar carpilmaktadir:n=1*2*3..*n

        faktoryel*=sayac;

    }

    cout<<"\n*** Sonuc ***\n\n";

    cout<<sayi<<" sayisinin faktoryeli:"<<faktoryel<<endl;

    return 0;

}

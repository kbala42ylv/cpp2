/*
    14. n elemanli kumenin r elemanli kombinasyonlari

                                                                Kamil Bala

*/

#include<iostream>
using namespace std;

int main()
{
    int n_r,n,r;

    int nFaktoryel=1,rFaktoryel=1, n_rFaktoryel=1;

    float kombinasyon=1;

    n_r=n-r;

    cout<<"\nn elemanli bir kumenin r elemanli kombinasyonlari sayisi\n\n";

    cout<<"n giriniz:";cin>>n;

    cout<<"r giriniz:";cin>>r;

    // n Faktoryel hesabi

    for(int sayac=1;sayac<=n;sayac++)
    {
        nFaktoryel*=sayac;// n faktoryel hesabi
    }

    // r faktoryel

    for(int sayac=1;sayac<=r;sayac++)
    {
        rFaktoryel*=sayac;// n faktoryel hesabi
    }

    // n-r faktoryel

    for(int sayac=1;sayac<=n_r;sayac++)
    {
        n_rFaktoryel*=sayac;// n faktoryel hesabi
    }

    //sonuc hesabi

    kombinasyon=nFaktoryel/(rFaktoryel*n_rFaktoryel);

    // Sonuclarin alinmasi

    cout<< n <<" elemanli kumenin "<<r;

    cout<<" elemanli kombinasyonlari sayisi:"<<kombinasyon<<endl;

    return 0;

}

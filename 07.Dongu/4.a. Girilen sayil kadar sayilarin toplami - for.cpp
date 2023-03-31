/*
    Girilen sayiya kadarki sayilarin toplamini yazdiran program

                                                                Kamil Bala
*/
#include<iostream>
using namespace std;

int main()
{
    int toplam=0, sonSayi=0;

    cout<< "Kaca kadar ki sayilari toplayaim:";
    cin>> sonSayi;

    for(int sayac =0; sayac <= sonSayi; sayac++)
    {
        toplam += sayac;
    }
    cout<<toplam<<endl;

    return 0;
}

/*
    Rastgele Girilen N adet Say�n�n Toplam�ni yazdiran program

                                                                Kamil Bala
*/
#include<iostream>
using namespace std;

int main()
{
    int toplam=0, adet, sayi;

    cout<< "Kac adet sayi toplayacaksiniz:";
    cin>> adet;

    for(int sayac = 1; sayac <= adet; sayac++)
    {
        cout<<sayac<<". sayi giriniz: ";
        cin>>sayi;

        toplam += sayi;
    }
    cout<<toplam<<endl;

    return 0;
}

/*
    Klavyeden girilen iki sayý üzerinde toplama, çýkartma, çarmpma ve bölme yapýp
    ekrama yazdýran program

                                                                Kamil Bala
*/
#include<iostream>
using namespace std;

int main()
{
    int sayiBir, sayiIki;
    int toplama, cikarma, carpma, bolme;

    cout<< "Birinci sayi giriniz: ";
    cin>>sayiBir;

    cout<< "Ikinci sayi giriniz: ";
    cin>>sayiIki;

    toplama = sayiBir + sayiIki;

    cikarma = sayiBir - sayiIki;

    carpma = sayiBir * sayiIki;

    bolme = sayiBir / sayiIki;


    cout<<"Toplama sonucu: "<<toplama<<endl;

    cout<<"Cikarma sonucu: "<<cikarma<<endl;

    cout<<"Carpma sonucu: "<<carpma<<endl;

    cout<<"Bolme sonucu: "<<bolme<<endl;

    /*
    cout<<sayiBir<<" + "<<sayiIki<<" = "<<toplama<<endl;

    cout<<sayiBir<<" - "<<sayiIki<<" = "<<cikarma<<endl;

    cout<<sayiBir<<" * "<<sayiIki<<" = "<<carpma<<endl;

    cout<<sayiBir<<" + "<<sayiIki<<" = "<<bolme<<endl;
    */
    return 0;
}

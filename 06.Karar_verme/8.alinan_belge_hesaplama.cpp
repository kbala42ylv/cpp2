/*
    Girilen nota gore alinan belgeyi hsaplayan program

                                                                Kamil Bala
*/
#include<iostream>
using namespace std;

int main()
{
    int puan;
    cout << "notu giriniz:"; cin >> puan;

    if(puan<50)
        cout << "kaldı";
    else if(puan<70)
        cout << "belge yok";
    else if(puan<85)
        cout << "teşekkür belgesi";
    else if(puan<=100)
        cout << "takdir belgesi";
    else
        cout <<"Hatali giris";

    return 0;


    return 0;
}

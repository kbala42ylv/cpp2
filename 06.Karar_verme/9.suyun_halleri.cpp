/*
sıcaklığa göre suyun halini bulan program

                                                                Kamil Bala
*/
#include<iostream>
using namespace std;

int main()
{
    int sicaklik;
    cout<<"Sicaklik giriniz:"; cin >> sicaklik;

    if(sicaklik < 0)
        cout << "Kati";
    else if(sicaklik < 100)
        cout << "Sivi";
    else if(sicaklik < 10000)
        cout << "Gaz";
    else
        cout << "Plazma";


    return 0;
}

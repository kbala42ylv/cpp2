 /*
    Üç kenari verilen bir ucgenin çevresini, alanini ve her kenarindaki aciyi bulan program.

                                                                   Kamil Bala
*/

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    float kenar1, kenar2, kenar3, cevre;

    float yaricap, s, alan;

    float radyan12, radyan13, radyan23, aci12, aci13, aci23 ;


    cout<< "1. kenari giriniz: ";
    cin>>kenar1;

    cout<< "2. kenari giriniz: ";
    cin>>kenar2;

    cout<< "3. kenari giriniz: ";
    cin>>kenar3;

    cevre = kenar1 + kenar2 + kenar3;

    s = cevre / 2;

    yaricap = sqrt((s-kenar1) * (s-kenar2) * (s-kenar3) / s);

    radyan12 = atan(yaricap / (s-kenar3)) * 2;

    radyan13 = atan(yaricap / (s-kenar2)) * 2;

    radyan23 = atan(yaricap / (s-kenar1)) * 2;

    aci12 = radyan12 * 180 / 3.1415;

    aci13 = radyan13 * 180 / 3.1415;

    aci23 = radyan23 * 180 / 3.1415;

    alan = sqrt(s * (s-kenar1) * (s-kenar2) * (s-kenar3));

    cout<<"Cevresi: "<<cevre<<endl;

    cout<<"Alani: "<<alan<<endl;

    cout<<"Aci12: "<<aci12<<endl;

    cout<<"Aci13: "<<aci13<<endl;

    cout<<"Aci23: "<<aci23<<endl;

    return 0;
}



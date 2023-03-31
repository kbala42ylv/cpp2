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

    radyan12=3.1415*aci12/180

    kenar3=sqrt(kenar1*kenar1+kenar2*Kenar2-2*Kenar1*Kenar2*cos(Radyan12))

    S=(Kenar1+Kenar2+Kenar3)/2

    Yaricap=sqrt((S-Kenar1)*(S-Kenar2)*(S-Kenar3)/S)

    Radyan13=atan(Yaricap/(S-Kenar2))*2

    Radyan23=atan(Yaricap/(S-Kenar1))*2;

    Aci13=Radyan13*180/3.1415

    Aci23=Radyan23*180/3.1415;

    Alan=(Kenar1*Kenar2*sin(Radyan12))/2

    cout<<"Cevresi: "<<cevre<<endl;

    cout<<"Alani: "<<alan<<endl;

    cout<<"Aci12: "<<aci12<<endl;

    cout<<"Aci13: "<<aci13<<endl;

    cout<<"Aci23: "<<aci23<<endl;

    return 0;
}



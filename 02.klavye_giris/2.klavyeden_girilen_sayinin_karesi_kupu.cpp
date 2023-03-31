/*
    Klavyeden girilen sayının karesini  ve kupunu hesaplayan program

                                                                Kamil Bala
*/
#include<iostream>
using namespace std;

int main()
{
    int sayi = 1;

    int kare = 1, kup = 1;

    cout<< "Bir giriniz: ";
    cin>>sayi;
/*
    kare = sayi * sayi;

    kup = sayi * sayi * sayi;
 */
    kare = sayi * sayi;

    kup = sayi * kare;

    cout<<"Girdiginiz sayi: "<<sayi<<endl;

    cout<<"Girdiginiz sayinin karesi: "<<kare<<endl;

    cout<<"Girdiginiz sayinin kupu: "<<kup<<endl;

    return 0;
}


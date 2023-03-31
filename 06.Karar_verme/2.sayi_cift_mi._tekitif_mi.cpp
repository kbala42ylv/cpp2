/*
    Girilen bir sayýnýn çift mi? tek mi ? oldugunu bulan program

                                                                Kamil Bala
*/
#include<iostream>
using namespace std;

int main()
{
    int sayi;

    cout<< "Bir sayi giriniz: ";
    cin>>sayi;

    if (sayi%2 == 0)
    {
        cout<<"Girdiginiz sayi cifttir "<<endl;
    }else
    {
        cout<<"Girdiginiz sayi tektir "<<endl;
    }


    return 0;
}

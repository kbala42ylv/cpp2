/*
    Girilen sayiya kadarki sayilari ekrana yazdiran program

                                                                Kamil Bala
*/
#include<iostream>
using namespace std;

int main()
{
    int sonSayi;

    cout<< "Kaca kadar ki sayilari yazdiralim:";
    cin>> sonSayi;

    for(int sayac =0; sayac <= sonSayi; sayac++)
    {
        cout<<sayac<<endl;
    }

    return 0;
}

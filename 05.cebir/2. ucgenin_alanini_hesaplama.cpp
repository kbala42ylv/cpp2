/*
    Bir ucgenin bir kenari ve o kenara ait yükseligi verildiginde alanini hesaplayan program.

                                                                Kamil Bala
*/

#include<iostream>

using namespace std;

int main()
{
    int kenar;

    int yukseklik;

    int alan;

    cout<< "Ucgenin bir kenarini giriniz: ";
    cin>>kenar;

    cout<< "O kenara ait yuksekligi giriniz: ";
    cin>>yukseklik;

    alan = 0.5 * kenar * yukseklik;

    cout<<"Kenari "<<kenar<<" o kenara ait yuksekligi "<<yukseklik <<" olan ucgenin alani:"<<alan<<endl;


    return 0;
}


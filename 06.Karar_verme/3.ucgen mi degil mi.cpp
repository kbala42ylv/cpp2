/*
    Bir uçgen olusabilmesi için kenarlardan birisinin diger iki kenarin
    toplamindan kucuk olmasi gerekir. Girilen uc kenardan ucgen olup olmayacagini
    yazdiran programi yaziniz

                                                                Kamil Bala
*/
#include<iostream>
using namespace std;

int main()
{
    int k1, k2, k3;

    cout<< "1. kenari giriniz: "; cin>>k1;
    cout<< "2. kenari giriniz: "; cin>>k2;
    cout<< "3. kenari giriniz: "; cin>>k3;

    int k12=k1+k2, k13=k1+k2, k23=k2+k3;


    if (k12<k3 || k13<k2 || k23<k1)
    {
        cout<<"Ucgen olamaz  "<<endl;
    }else
    {
        cout<<"ucgen olabilir "<<endl;
    }


    return 0;
}

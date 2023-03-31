/*
    if else if kullanımı

                        Kamil Bala
*/
#include<iostream>
using namespace std;

int main()
{
    char islem;

    cout<<"Bir islem seciniz: "; cin >> islem;

    if(islem == '+')
        cout << "Toplama islemi";
    else if(islem == '-')
        cout << "Cikarma islemi";
    else if(islem == '*')
        cout << "Carpma islemi";
    else if(islem == '/')
        cout << "Bolme islemi";
    else
        cout << "Hatali giris.";

    return 0;
}

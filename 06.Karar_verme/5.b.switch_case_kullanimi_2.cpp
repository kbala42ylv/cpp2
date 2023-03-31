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

    switch(islem){

        case '+':
            cout << "Toplama islemi";
            break;
        case '-':
            cout << "Cikarma islemi";
            break;
        case '*':
            cout << "Carpma islemi";
            break;
        case '/':
            cout << "Bolme islemi";
            break;
        default:
            cout << "Hatali giris.";
    }
    return 0;
}

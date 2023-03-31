/*
    if else if kullanımı

                        Kamil Bala
*/
#include<iostream>
using namespace std;

int main()
{
    int ay;
    cout << "Kacinci aydasiniz:"; cin >> ay;
    switch(ay)
    {
        case 1:
        case 2:
        case 12:
            cout << "Kis";
            break;
        case 3:
        case 4:
        case 5:
            cout << "Ilkbahar";
        break;
        case 6:
        case 7:
        case 8:
            cout << "Yaz";
        break;
        case 9:
        case 10:
        case 11:
            cout << "Sonbahar";
        break;

        default:
            cout << "Hatali giris";
    }



    return 0;
}

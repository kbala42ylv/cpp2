/*
    if else if kullanımı

                        Kamil Bala
*/
#include<iostream>
using namespace std;

int main()
{
    int ay;
    cout << "Kacinci aydasiniz:";
    cin >> ay;

    if(ay == 1 || ay == 2 || ay == 12)
        cout << "Kis";
    else if(ay == 3 || ay == 4 || ay == 5)
        cout << "Ilkbahar";
    else if(ay == 6 || ay == 7 || ay == 8)
        cout << "Yaz";
    else if(ay == 9 || ay == 10 || ay == 11)
        cout << "Sonbahar";
    else
        cout << "Hatali giris";


    return 0;
}

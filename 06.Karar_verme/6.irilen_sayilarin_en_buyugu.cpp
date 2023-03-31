/*
    Girilen 3 sayidan en buyugunu bulan program

                                                                Kamil Bala
*/
#include<iostream>
using namespace std;

int main()
{
    int A,B,C;

    cout << "Sayi 1:"; cin >> A;

    cout << "Sayi 2:"; cin >> B;

    cout << "Sayi 3:"; cin >> C;

    if(A>B)
    {
        if(A>C)
            cout << A;
        else
            cout << C;
    }
    else if(B<C)
    {
        cout << C;
    }
    else
    {
        cout << B;
    }


    return 0;
}

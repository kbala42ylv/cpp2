 /*
    Değil operatörü (bitsel NOT)(~x)

    Bir sayı alır ve onun tüm bitlerini ters çevirir..
    Yani 1 ler 0 -> 0'lar 1 olur

    (5)10 =  (0101)2
    Değili ~
    (-6)10 = (1010)2

                                            Kamil Bala
*/

#include <iostream>

using namespace std;

int main()
{
/*
    int a = 5;

    cout<<~a<<endl;
*/

    unsigned char x = 23; // x = 0001 0111
    unsigned char y = 78; // y = 0100 1110

    unsigned char z = ~x; // x = 0001 0111 = (23)10
                          // z = 1110 1000 = (232)10

    cout << "~23: " << (int)z << endl;

    z = ~y; // y = 0100 1110 = (78)10
            // z = 1011 0001 = (177)10

    cout << "~78 : " << (int)z << endl;

    return 0;

}


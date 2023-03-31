 /*
    Sağa kaydırma operatörü (sola kaydırma)(x >> y)
    iki sayı alır, birinci işlenenin bitlerini sağa kaydırır,
    ikinci işlenen kaydırılacak yerlerin sayısına karar verir. .
    9 >> 3
    1001 (1)
    0100 (2)
    0010 (3)



                                            Kamil Bala

*/

#include <iostream>

using namespace std;

int main()
{

    int a = 9; // 1001

    a = a >> 1; // 0100
    cout << "a >> 1: " << a << endl; // (0100)2 = (4)10

    a = a >> 1; // 0010
    cout << "a >> 1: " << a << endl; // (0010)2 = (2)10

    a = a >> 1; // 0001
    cout << "a >> 1: " << a << endl; // (0001)2 = (1)10

/*
    int y;
    int x = 23; // x = 0001 0111

    y = x >> 1; // y = 0000 1011 = (11)10
    cout << "23 >> 1: " << y << endl;

    y = x >> 2; // y = 0000 0101 = (5)10
    cout << "23 >> 3: " << y << endl;

    y = x >> 3; // y = 000 0010 = (2)10
    cout << "23 >> 3: " << y << endl;
*/
    return 0;

}


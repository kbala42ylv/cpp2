 /*
   Sola kaydırma operatörü (x << y)
   iki sayı alır, birinci işlenenin bitlerini sola kaydırır,
   ikinci işlenen kaydırılacak yerlerin sayısına karar verir. .
    x << y
    3 << 1//0011 <- 1 bit sola kaydırıyoruz
    01100 olur. Sonuç 10 tabanında ki karşılığı 6 çıkıştan alırız


                                            Kamil Bala

*/

#include <iostream>

using namespace std;

int main()
{
/*
    int x=3;

//  1 kes sola döndürme
    x = x<<1;
    cout<<x<<endl; // 0110


    // 2 kes sola döndürme
    x = x << 2; // 0110
                // 1100 = 12
    cout<<x<<endl;
*/

    int y;
    int x = 23; // x = 0001 0111
    y = x << 1; // y = 0010 1110
    cout << "23 << 1: " << y << endl;

                // x = 0001 0111
                //     0010 1110  (1)
                //     0101 1100  (2)
    y = x << 3; // y = 1011 1000  (3)
    cout << "23 << 3: " << y << endl;

    return 0;

}


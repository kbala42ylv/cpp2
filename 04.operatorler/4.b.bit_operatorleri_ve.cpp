 /*
     VE (AND)operatörü (x & y)

    & (bit düzeyinde AND), işlenen olarak iki sayı alır ve iki sayının her bitinde VE yapar.
    AND'nin sonucu, yalnızca her iki bit de 1 ise 1'dir.

                                            Kamil Bala


*/

#include <iostream>

using namespace std;

int main()
{
/*
    int x = 5;            //0101 = (5)10
    int y = 9;            //1001 = (9)10
    int z = x & y;        //0001 = (1)10
    cout << "Sonuc: " << z << endl;
 */
    int x = 27;     // x = 0001 1011 = (27)10
    int y = 58;     // y = 0011 1010 = (58)10
    int z = x & y;  // z = 0001 1010 = (26)10
    cout << "Sonuc: " << z << endl;

    return 0;

}


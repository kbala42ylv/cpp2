 /*
     VEYA (OR) operatörü (x | y)
     iki sayıyı işlenen olarak alır ve iki sayının her bitinde OR yapar.
     İki bitten herhangi biri 1 ise OR'nin sonucu 1'dir


                                            Kamil Bala

*/

#include <iostream>

using namespace std;

int main()
{

    int x = 5;      //0101 = (5)10
    int y = 9;      //1001 = (9)10
    int z = x | y;  //1101 = (13)10
    cout << "Sonuc: " << z << endl;

/*
    int x = 23;     // x = 0001 0111 = (23)10
    int y = 78;     // y = 0100 1110 = (78)10
    int z = x | y;  // z = 0101 1111 = (95)10

    cout << "Sonuc: " << z << endl;
*/
    return 0;

}


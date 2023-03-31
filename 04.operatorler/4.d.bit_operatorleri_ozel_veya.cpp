 /*
    ÖZELVEYA operatörü (bitsel XOR)(x ^ y)
    iki sayıyı işlenen olarak alır ve iki sayının her bitinde XOR yapar.
    İki bit farklıysa, XOR'un sonucu 1'dir.
    İki bit aynıysa  , XOR'un sonucu 0'dir.


                                            Kamil Bala

*/

#include <iostream>

using namespace std;

int main()
{

    int x = 5;      //0101 = (5)10
    int y = 9;      //1001 = (9)10
    int z = x ^ y;  //1100 = (12)10
    cout << "Sonuc: " << z << endl;
 /*
    int x = 23;    // x = 0001 0111 = (23)10
    int y = 78;    // y = 0100 1110 = (78)10
    int z = x ^ y; // z = 0101 1001 = (89)10
    cout << "Sonuc: " << z << endl;
*/
    return 0;

}


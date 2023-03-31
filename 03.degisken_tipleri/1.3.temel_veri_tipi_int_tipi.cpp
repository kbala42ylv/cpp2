 /*
    int Veri Tipi

    Programlamada en sık kullanılan veri türüdür. Tam sayı türleri virgüllü sayıları veya kesirleri saklayamaz
    (örneğin, 5.1 veya 1/4). 16 bit bilgisayarlar için int veri tipi short veri tipine eşdeğer olurken,
    32 bit bilgisayarlar için int veri tipi long veri tipine eşdeğer olur.


                                            Kamil Bala
    Alıntı:
    Deneyap Yazılım Teknolojileri
*/

#include <iostream>

using namespace std;

int main()
{
    int sayi = 5;
    cout << sayi;

    cout<<"---int veri tipi---"<<endl;

    // int veri tipi (4 byte)
    cout << "int boyutu: " << sizeof(int) << endl;

    // min değer:-2147483648	max değer: 2147483647

    int int_min = -2147483648;
    int int_max = 2147483647;

    int int_neg1 = -2147483649;
    int int_poz1 = 2147483648;

    int int_neg2 = -2147483650;
    int int_poz2 = 2147483649;


    cout << "int_min: " << int_min << endl;
    cout << "int_max: " << int_max << endl;
    cout << endl;

    cout << "int_neg1: " << int_neg1 << endl;
    cout << "int_poz1: " << int_poz1 << endl;
    cout << endl;

    cout << "int_neg2: " << int_neg2 << endl;
    cout << "int_poz2: " << int_poz2 << endl;
    cout << endl;

    return 0;

}


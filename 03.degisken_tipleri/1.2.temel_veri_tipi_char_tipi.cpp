 /*
    char Veri Tipi

    Bir karakter (char) veri türü, standart ASCII tablosunda gösterilen herhangi bir harf veya simge
    olabilecek 256 farklı karakterden herhangi birini içerebilir.
    Dolayısıyla karakter kodu, her karakterle ilişkilendirilmiş bir tam sayıdır.

    Bir karakter değişkeni iki tek tırnakla ifade edilir. Örneğin, ‘C’, ‘5’, ‘*’ ve ‘T’ karakter ifadeleridir.

    Alıntı:
    Deneyap Yazılım Teknolojileri


                                            Kamil Bala

*/

#include <iostream>

using namespace std;

int main()
{
    char harf = 'a';
    cout << "Yazilan harf: " << harf;


    cout<<"---char veri tipi---"<<endl;

    // char veri tipi (1 byte)
    cout << "char boyutu: " << sizeof(char) << endl;

    // karakter yada sayisal deger
    // min değer:-128	max değer: 128
/*
    char c1 = 'a';
    char c2 = 'A';
    char c3 = 'AB';
    char c4 = '1';
    char c5 = '10';
    char c6 = 'ArZ5';


    cout << "c1: " << c1 << endl;
    cout << "c2: " << c2 << endl;
    cout << "c3: " << c3 << endl;
    cout << "c4: " << c4 << endl;
    cout << "c5: " << c5 << endl;
    cout << "c6: " << c6 << endl;
*/
    char c_min = -127;
    char c_max = 128;
    cout << "c_min: " << c_min << endl;
    cout << "c_max: " << c_max << endl;
    cout << endl;
/*
    char c_min1 = -128;
    char c_max1 = 129;
    cout << "c_min1: " << c_min1 << endl;
    cout << "c_max1: " << c_max1 << endl;
    cout << endl;

    char c_min2 = -129;
    char c_max2 = 130;
    cout << "c_min2: " << c_min2 << endl;
    cout << "c_max2: " << c_max2 << endl;
    cout << endl;

    char c_min3 = -255;
    char c_max3 = 254;
    cout << "c_min3: " << c_min3 << endl;
    cout << "c_max3: " << c_max3 << endl;
    cout << endl;

    char c_min4 = -256;
    char c_max4 = 255;
    cout << "c_min4: " << c_min4 << endl;
    cout << "c_max4: " << c_max4 << endl;
    cout << endl;
 */
    return 0;

}


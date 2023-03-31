 /*
    Veri tipi Düzenleyicilerin Sınır Degerlerini İnceleme

                                Kamil Bala
*/

#include <iostream>
using namespace std;

int main()
{

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

/*
    cout<<"---short int veri tipi---"<<endl;

    // short int veri tipi (2 byte)
    cout << "short int boyutu: " << sizeof(short int) << endl;

    // min değer:-32,768 max değer: 32,767

    short int int_min = -32768;
    short int int_max = 32767;

    short int int_neg1 = -32769;
    short int int_poz1 = 32768;

    short int int_neg2 = -32770;
    short int int_poz2 = 32769;


    cout << "short int_min: " << int_min << endl;
    cout << "short int_max: " << int_max << endl;
    cout << endl;

    cout << "short int_neg1: " << int_neg1 << endl;
    cout << "short int_poz1: " << int_poz1 << endl;
    cout << endl;

    cout << "short int_neg2: " << int_neg2 << endl;
    cout << "short int_poz2: " << int_poz2 << endl;
    cout << endl;
*/
/*
    cout<<"---unsigned short int veri tipi---"<<endl;

    // int veri tipi (2 byte)
    cout << "unsigned short int boyutu: " << sizeof(unsigned short int) << endl;

    // min değer:0 max değer: 65535

    unsigned short int int_min = 0;
    unsigned short int int_max = 65535;

    unsigned short int int_neg1 = -1;
    unsigned short int int_poz1 = 65536;

    unsigned short int int_neg2 = -2;
    unsigned short int int_poz2 = 65537;


    cout << "unsigned short int_min: " << int_min << endl;
    cout << "unsigned short int_max: " << int_max << endl;
    cout << endl;

    cout << "unsigned short int_neg1: " << int_neg1 << endl;
    cout << "unsigned short int_poz1: " << int_poz1 << endl;
    cout << endl;

    cout << "unsigned short int_neg2: " << int_neg2 << endl;
    cout << "unsigned short int_poz2: " << int_poz2 << endl;
    cout << endl;
*/
/*

    cout<<"---unsigned int veri tipi---"<<endl;

    // int veri tipi (4 byte)
    cout << "unsigned int boyutu: " << sizeof(unsigned int) << endl;
    cout << endl;
    // min değer:0 max değer: 4,294,967,295

    unsigned int int_min = 0;
    unsigned int int_max = 4294967295;

    unsigned int int_neg1 = -1;
    unsigned int int_poz1 = 4294967296;

    unsigned int int_neg2 = -2;
    unsigned int int_poz2 = 4294967297;


    cout << "unsigned int_min: " << int_min << endl;
    cout << "unsigned int_max: " << int_max << endl;
    cout << endl;

    cout << "unsigned int_neg1: " << int_neg1 << endl;
    cout << "unsigned int_poz1: " << int_poz1 << endl;
    cout << endl;

    cout << "unsigned int_neg2: " << int_neg2 << endl;
    cout << "unsigned int_poz2: " << int_poz2 << endl;
    cout << endl;
*/
    return 0;
}

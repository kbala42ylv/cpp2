 /*
    Bool veri tipi en basit veri tipidir ve bir bayt uzunluğundadır.
    Doğru (1) ve yanlış (0) olmak üzere iki değerden birini saklayabilir.
    Programınızda yalnızca iki olasılığınız olduğunda bool türünü kullanabilirsiniz.
    Doğru (true-1) veya yanlış (false-0) değerlerini alabilen veri tipidir

    Alıntı:
    Deneyap Yazılım Teknolojileri


                                            Kamil Bala

*/

#include <iostream>

using namespace std;

int main()
{
    cout<<"---boolean veri tipi---"<<endl;

    // boolean veri tipi (1	byte)
    cout << "Bool boyutu: " << sizeof(bool) << endl;

    // min değer:O(false)	max değer: 1 (true)

    bool a;
    bool b = false;
    bool c = true;
    bool d = 0;
    bool e = 1;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    cout << "d: " << d << endl;
    cout << "e: " << e << endl;


    return 0;

}


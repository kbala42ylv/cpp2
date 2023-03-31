 /*
    Atama Operatorleri


                                            Kamil Bala

*/

#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int b = 5;

    //
    // Sağdaki değeri soldaki değişkene atamak için kullanılır
    // a'yi b'ya ata
    // b = a
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    b = a;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;

/*
    // topla, ata (b+=a)
    // Bu işleç, ‘+’ ve ‘=’ operatörlerinin birleşimidir. Önce
    // soldaki değişkenin geçerli değerini sağdaki değere ekler ve
    // ardından sonucu soldaki değişkene atar.
    // b = b + a
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    b += a;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
*/
/*
    // Çıkart ata (b-=a)
    // Bu işleç, ‘-’ ve ‘=’ operatörlerinin birleşimidir. Önce
    // soldaki değişkenin geçerli değerini sağdaki değerden çıkarır
    // ve ardından sonucu soldaki değişkene atar.
    // b = b - a
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    b -= a;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
*/
/*
    // Çarp, ata (b*=a)
    // Bu işleç ‘*’ ve ‘=’ operatörlerinin birleşimidir. Önce soldaki
    // değişkenin geçerli değerini sağdaki değerle çarpar ve
    // ardından sonucu soldaki değişkene atar.
    // b = b * a
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    b *= a;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
*/
/*
    // Böl, ata   (a/=b)
    // Bu işleç ‘/’ ve ‘=’ operatörlerinin birleşimidir. Önce soldaki
    // değişkenin geçerli değerini sağdaki d
    // a = a / b
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    a /= b;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
*/
/*
    // Mod al ata (a%=b)
    // Bu işleç ‘%’ ve ‘=’ operatörlerinin birleşimidir. Önce
    // soldaki değişkenin geçerli değerini sağdaki değere göre
    // modunu alır ve ardından sonucu soldaki değişkene atar
    // a = a % b
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    a %= b;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
*/
    return 0;

}


/*
    1 ile 10 arası sayıları ekrana yazdıran program

                                                                Kamil Bala
*/
#include<iostream>
using namespace std;

int sayac = 1;

int main()
{
    basla:// etiket tanımlıyoruz
    if (sayac < 11)
    {
        cout<<sayac<<endl;
        sayac++;
    }
    goto basla;

    return 0;
}

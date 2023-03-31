 /*
    Bir dik üçgenin iki kenarı veriliyor. Hipotenüsünü bulan program.
                                                                   Kamil Bala
*/

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int kenar1, kenar2;

    float hipotenus;

    cout<< "1. kenari giriniz: ";
    cin>>kenar1;

    cout<< "2. kenarigiriniz: ";
    cin>>kenar2;

    hipotenus = sqrt(pow(kenar1,2) + pow(kenar2,2));

    cout<<"hipotenus: "<<hipotenus<<endl;

    return 0;
}



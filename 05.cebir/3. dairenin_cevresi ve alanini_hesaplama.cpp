 /*
    Dairenin yarýçapý verildiðinde çevresini ve alanýný bulan program.

                                                                Kamil Bala
*/
#include<iostream>
using namespace std;

int main()
{
    float yaricap;

    const float PI = 3.14;

    float cevresi, alani;

    cout<< "Dairenin yaricapini giriniz: ";
    cin>>yaricap;

    cevresi = 2*PI*yaricap;

    alani = PI*yaricap*yaricap;

    cout<<"Dairenin cevresi: "<<cevresi<<endl;

    cout<<"Dairenin alani: "<<alani<<endl;

    return 0;
}



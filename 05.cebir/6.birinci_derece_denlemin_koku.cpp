 /*
    Katsayýlarý girilen ax+b=c birinci derece denkleminin kökünü bulan program.
                                                                   Kamil Bala
*/

#include<iostream>

using namespace std;

int main()
{
    int a,b,c;

    float x;

    cout<< "a katsayisini giriniz: ";
    cin>>a;

    cout<< "b katsayisini giriniz: ";
    cin>>b;

    cout<< "c katsayisini giriniz: ";
    cin>>c;

    x=(c-b)/a;

    cout<<"x: "<<x<<endl;

    return 0;
}



 /*
    P1(X1,Y1) ve P2(X2,Y2) þeklinde verilen iki nokta arasý uzaklýðý bulan program.
                                                                   Kamil Bala
*/

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int X1, Y1, X2, Y2;

    float d1, d2, uzunluk;

    cout<< "X1 giriniz: ";
    cin>>X1;

    cout<< "Y1 giriniz: ";
    cin>>Y1;

    cout<< "X2 giriniz: ";
    cin>>X2;

    cout<< "Y2 giriniz: ";
    cin>>Y2;


    d1=pow((X2-X1),2); //kare

    d2=pow((Y2-Y1),2);

    uzunluk=sqrt(d1+d2);

    cout<<"d1: "<<d1<<endl;

    cout<<"d2: "<<d2<<endl;

    cout<<"uzunluk: "<<uzunluk<<endl;

    return 0;
}



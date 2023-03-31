 /*
    Uç noktalarý P1(X1,Y1) ve P2(X2,Y2) þeklinde verilen bir doðru parçasýnýn
    orta noktasýný bulan program.
                                                                Kamil Bala
*/
#include<iostream>

using namespace std;

int main()
{
    int X1, Y1, X2, Y2;

    float Xm, Ym;

    cout<< "X1 giriniz: ";
    cin>>X1;

    cout<< "Y1 giriniz: ";
    cin>>Y1;

    cout<< "X2 giriniz: ";
    cin>>X2;

    cout<< "Y2 giriniz: ";
    cin>>Y2;

    Xm=(X1+X2)/2;

    Ym=(Y1+Y2)/2;

    cout<<"Xm: "<<Xm<<endl;

    cout<<"Ym: "<<Ym<<endl;

    return 0;
}



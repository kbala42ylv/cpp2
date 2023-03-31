 /*
    Bir paralel kenarin iki kenari ve arasındaki aci verilmektedir. Bu aci uzerindeki
    kosegen d1 diger köşegen d2’yi bulan program
                                                                   Kamil Bala
*/

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int kenar1, kenar2, aci;

    float radyan, cot, yukseklik, alan, araKosegen, karsiKosegen;

    cout<< "1. kenari giriniz: ";
    cin>>kenar1;

    cout<< "2. kenari giriniz: ";
    cin>>kenar2;

    cout<< "Kenarlar arasinda ki aciyi giriniz : ";
    cin>>aci;

    radyan = 3.1415 * aci/180;

    cot=sin(radyan)/cos(radyan);

    yukseklik = kenar2*sin(radyan);

    alan=kenar1*yukseklik;

    araKosegen=sqrt(pow((kenar1+yukseklik*cot),2)+pow(yukseklik,2));

    karsiKosegen=sqrt(pow((kenar1-yukseklik*cot),2)+pow(yukseklik,2));

    cout<<"Ara Kosegen: "<<araKosegen<<endl;

    cout<<"Karsi Kosegen: "<<karsiKosegen<<endl;

    cout<<"Arada ki aci: "<<aci<<endl;

    return 0;
}



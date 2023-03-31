/*
    100 ile 200 arasinda 3’e bolunen ancak 5 ile bolunmeyen sayilari ve adetlerini
    yazdiran program
                                                                Kamil Bala

*/

#include<iostream>
using namespace std;

int main()
{
    int adet;

    for(int sayac=100;sayac<=200;sayac++)
    {
        if(sayac%3==0 && sayac%5!=0)
        {
            cout<<sayac<<endl;
            adet++;
        }

    }

    cout<<"100 ile 200 arasinda 3 e bolunen ancak 5 ile bolunmeyen sayisi:"<<adet<<endl;


    return 0;

}

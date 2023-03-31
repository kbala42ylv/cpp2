/*
  Kullan�c�n�n girecegi say�lardan tek, cift,
  teklerin toplam� ve �iftlerin toplam�n� bulan program
*/
#include<iostream>

using namespace std;

int main()
{
    int sayac = 1, sayi;
    int tekAdet=0, ciftAdet=0; // tek ve �ift say�lar�n adetleri
    int teklerinToplami = 0, ciftlerinToplam = 0;// tek ve �ift say�lar�n toplamlari

    // 10 adet say� testi
    while(sayac<=10)
    {
        cout<<sayac<<". sayiyi giriniz:"; cin>>sayi; // o anki sayac icerigini ekrana yazdiriyoruz

        if(sayi%2 == 0) // Girilen sayi ciftse
        {
            // Cift sayilari gormek
            //cout<<sayi<<endl;
            //cift sayilarin toplami
            ciftlerinToplam = ciftlerinToplam + sayi; // girilen sayi ciftse onceki ciftlerin toplamina ekle
            ciftAdet = ciftAdet + 1; // �ift say�lar�n adedini 1 arttir
        }
        else // Girilen sayi
        {
            // Tek sayilari gormek
            //cout<<sayi<<endl;
            //cift sayilarin toplami
            teklerinToplami = teklerinToplami + sayi; // girilen sayi tekse onceki teklerin toplamina ekle
            tekAdet = tekAdet + 1; //  tek sayilarin adedini 1 arttir
        }
        sayac = sayac+1; // sayi++ yazilabilir
    }
    cout<<"Ciftlerin adedi:"<<ciftAdet <<endl; // Cift sayilarin adedini yazdir
    cout<<"Ciftlerin toplam�:"<<ciftlerinToplam <<endl; // Cift sayilarin toplamini yazdir
    cout<<"Teklerin adedi:"<<tekAdet <<endl; // Tek sayilarin adedini yazdir
    cout<<"Teklerin toplami:"<<teklerinToplami<<endl; // Tek sayilarin toplamini yazdir

    return 0;
}



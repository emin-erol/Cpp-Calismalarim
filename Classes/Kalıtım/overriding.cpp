#include <iostream>
using namespace std;

class Kitap{
    public:
        string isim;
        void BilgileriYazdir(){ // classtaki bilgileri gosteren fonksiyon
            cout << "Kitabin adi: " << isim << endl;
        }
};

class Roman:public Kitap{
    public:
        string RomanTuru;
        Roman(string isim,string RomanTuru){
            this->isim = isim;
            this->RomanTuru = RomanTuru;
        }
        void BilgileriYazdir(){ // Miras alınan classtaki fonksiyon üzerinde işlemler yapıp tekrar kullanıyoruz.
            cout << "Kitap adi: " << isim << endl;
            cout << "Kitap turu: " << RomanTuru << endl;
        }
};

int main(){
    Roman r1("Cinayet Alfabesi","Orta");
    r1.BilgileriYazdir();
    Kitap *k1;
    k1 = &r1;
    k1->BilgileriYazdir();
    return 0;
}
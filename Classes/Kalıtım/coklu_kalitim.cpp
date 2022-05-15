#include <iostream>
using namespace std;

class Blok{
    public:
        int OdaSayisi;
        int KapasiteBul(int oda_sayisi){
            return oda_sayisi*4;
        }
};

class Yemekhane{
    public:
        int MasaSayisi;
        int KapasiteBul(int masa_sayisi){
            return masa_sayisi*8;
        }
};

class Ana:public Blok,public Yemekhane{
    public:
        string YurtAdi;
    
};

int main(){
    Ana ornek1;
    cout << "Ogrenci sayisi: " << ornek1.Blok::KapasiteBul(20) << endl; // Aynı fonksiyon isimlerini ayrı ayrı kullanabilmek
    cout << "Ogrenci sayisi: " << ornek1.Yemekhane::KapasiteBul(10) << endl;
    return 0;
}
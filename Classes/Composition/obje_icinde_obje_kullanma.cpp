#include <iostream>
using namespace std;

class Tarih{
    private:
        int gun;
        int ay;
        int yil;
    public:
        Tarih(int g,int a,int y){
            gun = g;
            ay = a;
            yil = y;
        }
        void TarihiGoster(){
            cout << gun << "/" << ay << "/" << yil << endl;
        }
};

class Insan{
    private:
        string isim;
        Tarih DogumTarihi;
    public:
        Insan(string i,Tarih dt):isim(i),DogumTarihi(dt){} // Tarih classını kullanarak Insan classındaki
        void BilgileriGoster(){                            // tarih bilgisini doldurduk.
            cout << isim << " isimli kisinin dogum tarihi: ";
            DogumTarihi.TarihiGoster();
        }
};

int main(){
    Tarih DogumTarihi(8,11,2000);
    Insan i1("Emin Erol",DogumTarihi);
    i1.BilgileriGoster();
    return 0;
}
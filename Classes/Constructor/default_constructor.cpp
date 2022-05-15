#include <iostream>
using namespace std;

class Hayvan{
    private:
        string isim;
        string tur;
        int yas;
    public:
        Hayvan();
        void BilgileriGuncelle(string isim,string tur,int yas){
            this->isim = isim;
            this->tur = tur;
            this->yas = yas;
        }
        void BilgileriGetir(){
            cout << endl << "Ad: " << this->isim << endl;
            cout << "Tur: " << this->tur << endl;
            cout << "Yas: " << this->yas << endl;
        }
};
Hayvan::Hayvan(){ // Default Constructor metdumuzu bu şekilde de tanımlayabiliriz.
            this->isim = "null";
            this->tur = "null";
            this->yas = 0;
        }

int main(){
    string ad,tur;
    int yas;
    Hayvan hayvanlar[3];
    for(int i=0;i<3;i++){
        cout << i+1 << ". Hayvanin ozelliklerini giriniz." << endl;
        cout << "Isim: ";
        cin >> ad;
        cout << "Tur: ";
        cin >> tur;
        cout << "Yas: ";
        cin >> yas;
        hayvanlar[i].BilgileriGuncelle(ad,tur,yas);
    }
    for(int i=0;i<3;i++){
        hayvanlar[i].BilgileriGetir();
    }
    return 0;
}
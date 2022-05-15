#include <iostream>
using namespace std;

class Insan{
    private:
        string isim;
        int yas;
    public:
        Insan(string isim,int yas){
            this->isim = isim;
            this->yas = yas;
        }
        void BilgileriGoster(){
            cout << "Isim: " << isim << endl;
            cout << "Yas: " << yas << endl;
        }
        ~Insan(){ // Objeyi silmek icin kullanılması gereken metod.
            cout << "OBJE YOK EDILDI!" << endl;
        }
};

int main(){
    Insan *i1 = new Insan("Emin Erol",21);
    Insan *i2 = new Insan("Zehra Nur Acik",20);
    i1->BilgileriGoster();
    i2->BilgileriGoster();
    delete i1; // Nesneyi sildik.
    delete i2;
    return 0;
}
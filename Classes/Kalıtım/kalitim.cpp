#include <iostream>
using namespace std;

class Hayvanlar{
    public:
        string isim;
};

class Memeliler:public Hayvanlar{
    private:
        string isim = "Bir isim belirtilmedi.";
    public:
        int TurSayisi;
        string GetIsim(){
            return isim;
        }
        void SetIsim(string isim){
            this->isim = isim;
        }
};

int main(){
    Memeliler hayvan1;
    Hayvanlar *h1;
    h1 = &hayvan1; // Miras alınan classtaki aynı isme sahip değişkeni 31. satırdaki gibi kullanabilmek için bu işlemi yapıyoruz
    hayvan1.SetIsim("Kaplan");
    hayvan1.TurSayisi = 4;
    h1->isim = "Kedigiller";
    cout << "Hayvanin adi: " << hayvan1.GetIsim() << endl;
    cout << "Turunun sayisi: " << hayvan1.TurSayisi << endl;
    cout << "Turunun adi: " << h1->isim;
    return 0;
}
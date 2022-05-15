#include <iostream>
using namespace std;

class Hayvan{
    public:
        string ses = "Her hayvanin bir sesi vardir.";
        void SesCikar(){ // Miras alan classlarin hepsinin bu fonksiyonu kullanmasi olayi
            cout << ses << endl;
        }
};

class Kedi:public Hayvan{
    public:
        Kedi(){
            ses = "Miyav";
        }
};

class Kopek:public Hayvan{
    public:
        Kopek(){
            ses = "Hav hav";
        }
};

int main(){
    Kedi kedim;
    Kopek kopegim;
    kedim.SesCikar();
    kopegim.SesCikar();
    return 0;
}
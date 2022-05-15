#include <iostream>
using namespace std;

class Toplama{
    private:
        int s1,s2;
    public:
        Toplama(int sayi1,int sayi2):s1(sayi1),s2(sayi2){}
        Toplama(const Toplama & kopya):s1(kopya.s1),s2(kopya.s2){} // Yukarıdaki constructorun kopyası oluşturuldu.
        void SonucuYazdir(){
            cout << s1 << " + " << s2 << " = " << s1+s2 << endl;
        }
};

int main(){
    Toplama t1(15,22);
    Toplama t2(t1); // t2 nesnesi t1 in özelliklerini kopyaladı.
    t1.SonucuYazdir();
    t2.SonucuYazdir();
    return 0;
}
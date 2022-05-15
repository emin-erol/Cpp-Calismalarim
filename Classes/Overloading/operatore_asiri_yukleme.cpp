#include <iostream>
using namespace std;

class Sayi{
    public:
        int deger;
        Sayi(){}
        Sayi(int s1){
            deger = s1;
        }
        Sayi operator+(Sayi s2){ // Overloading işlemi ile artı operatörü kullanıldığında ikisini de toplayan metod
            Sayi toplam;
            toplam.deger = deger + s2.deger;
            return(toplam);
        }
        Sayi operator-(Sayi s2){ // Yukarıdaki işlemin aynısını çıkarma şeklinde yapar.
            Sayi toplam;
            toplam.deger = deger - s2.deger;
            return(toplam);
        }
};

int main(){
    Sayi sayi1(10);
    Sayi sayi2(33);
    Sayi sayi3;
    sayi3 = sayi1 - sayi2;
    cout << "3. sayinin degeri: " << sayi3.deger << endl;
    return 0;
}
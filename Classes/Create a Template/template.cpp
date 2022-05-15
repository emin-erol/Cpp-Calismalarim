#include <iostream>
using namespace std;

template<class Tip> // Tip adlı değişken isminin tipinin ne olduğunu main fonksiyonunda biz belirliyoruz

Tip Toplama(Tip s1,Tip s2){
    return s1 + s2;
}

int main(){
    int sayi1,sayi2;
    cout << "Toplanacak sayilari giriniz: ";
    cin >> sayi1 >> sayi2;
    cout << "Toplam: " << Toplama<int>(sayi1,sayi2); // Tip adlı değişken adının tipini int olarak belirledik
    return 0;
}
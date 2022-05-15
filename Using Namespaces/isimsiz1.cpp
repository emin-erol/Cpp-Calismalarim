#include <iostream>
using namespace std;

namespace Math{
    float pi = 3.14;
    float e = 2.71;
    float cevre(float r){
        return 2*pi*r;
    }
    float daire_alan(float r){
        return 2*pi*pi;
    }
    float dortgen_alan(int k1,int k2){
        return k1*k2;
    }
    float kare_al(float sayi){
        return sayi*sayi;
    }
}
using namespace Math;

int main(){
    float yaricap;
    cout << "Dairenin yaricapini giriniz: ";
    cin >> yaricap;
    cout << "Dairenin cevresi: " << cevre(yaricap) << endl;
    cout << "Dairenin alani: " << daire_alan(yaricap) << endl;
}

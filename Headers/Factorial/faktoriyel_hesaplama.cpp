#include <iostream>
#include "faktoriyel.h"
using namespace std;

int main(){
    int adet;
    cout << "Kac sayi hesaplamak istediginizi giriniz: ";
    cin >> adet;
    int sayilarim[adet];
    for(int i=0;i<adet;i++){
        cout << i+1 << ". sayi: ";
        cin >> sayilarim[i];
    }
    Head Ornek[adet];
    for(int i=0;i<adet;i++){
        Ornek->Hesapla(sayilarim[i]);
    }
    return 0;
}
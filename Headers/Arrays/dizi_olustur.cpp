#include <iostream>
#include <ctime>
#include "diziyi_siralama.h"
#include "max_bul.h"
#include "math.h"
using namespace std;

int main(){
    int a;
    cout << "Olusturmak istediginiz dizinin eleman sayisini girin: ";
    cin >> a;
    int dizim[a];
    srand(time(0));
    for(int i=0;i<a;i++){
        dizim[i] = rand()%20;
    }
    MaxBul diziA;
    BuyukBul diziB;
    Hesapla diziC;
    diziA.Yazdir(dizim,a);
    diziA.Sirala(dizim,a);
    cout << "Dizinin En buyuk elemani: " << diziB.Bul(dizim,a) << endl;
    cout << "Dizi Elemanlarinin Toplami: " << diziC.Toplam(dizim,a) << endl;
    cout << "Dizinin Modu " << diziC.Mod(dizim,a) << endl;
    return 0;
}
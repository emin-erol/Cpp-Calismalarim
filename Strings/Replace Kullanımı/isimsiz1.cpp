#include <iostream>
#include <string>
using namespace std;

int main(){
    string isim = "Emin Erol";
    isim.replace(0,4,"Zehra Nur"); // 0 dan 4. indise kadar olan karakterleri silip yerine yazmasını istediğimiz
    cout << isim;                  // stringi yaziyoruz. Yani 'Emin Erol' -> 'Zehra Nur Erol' oluyor.
    return 0;
}
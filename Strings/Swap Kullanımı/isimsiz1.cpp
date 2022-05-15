#include <iostream>
#include <string>
using namespace std;

int main(){
    string isim = "Emin";
    string soyisim = "Erol";
    isim.swap(soyisim); // İki string ifade arasında yer değiştirme işlemi yapar.
    cout << isim << "  " << soyisim;
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main(){
    string isim = "Emin Erol";
    isim.erase(3,3); // belirtilen indisten baslayarak belirtilen indis kadar silme işlemi yapar.
    cout << isim;
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main(){
    int sayi = 10;
    string veri;
    veri = to_string(sayi);
    cout << "Sayi tipinde degisken: " << sayi << endl;
    cout << "String tipinde degisken: " << veri << endl;
    return 0;
}
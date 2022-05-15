#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<string> Dizi; // Dizi adında bir string listesi olusturduk
    Dizi.push_back("Emin"); // Dizi listiesine elemanlar ekliyoruz
    Dizi.push_back("Erol");
    for(int i=0;i<2;i++)
        cout << Dizi[i] << " ";
    cout << endl;
    for(vector<string>::iterator i=Dizi.begin();i != Dizi.end();i++)
        cout << *i << " "; // i ifadesi listenin basindan baslayarak sonundaki elemanina kadar gider
    return 0;
}
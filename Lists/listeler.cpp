#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> Sayilarim;
    int n,sayi,toplam=0;
    cout << "Kac adet sayi girmek istediginizi yaziniz: ";
    cin >> n;
    for(int i=0;i<n;i++){
        cout << i+1 << ". sayi: ";
        cin >> sayi;
        toplam += sayi;
        Sayilarim.push_back(sayi);
    }
    list<int>::iterator iter = Sayilarim.begin();
    Sayilarim.push_back(toplam);
    cout << "Liste: ";
    for(int i = 0;i<Sayilarim.size();i++){
        cout << *iter << "  ";
        iter++;
    }
        
    return 0;
}
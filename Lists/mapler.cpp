#include <iostream>
#include <map>
using namespace std;

int main(){
    map<int,string> KayitBilgisi;
    int n;
    int KayitNo;
    string isim;
    cout << "Kac adet kayit yapilacagini giriniz: ";
    cin >> n;
    for(int i=0;i<n;i++){
        cout << i+1 << ". kayit;" << endl;
        cout << "Kayit No: ";
        cin >> KayitNo;
        cout << "Isim: ";
        cin >> isim;
        KayitBilgisi[KayitNo] = isim;
    }
    map<int,string>::iterator baslangic = KayitBilgisi.begin();
    for(int i=0;i<n;i++){
        cout << i+1 << ". kayit;" << endl;
        cout << "Kayit No: " << baslangic->first << endl;
        cout << "Isim: " << baslangic->second << endl;
        cout << endl;
        baslangic++;
    }
    return 0;
}
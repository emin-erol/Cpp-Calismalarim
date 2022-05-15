#include <iostream>
using namespace std;

void SeriOlustur(int baslangic,int bitis,int artis){
    if(baslangic <= bitis){
        cout << baslangic << "  ";
        SeriOlustur(baslangic+artis,bitis,artis);
    }
    exit(0);
}

int main(){
    int a,b,c;
    cout << "Serinin baslangic, bitis ve artis miktarini giriniz: ";
    cin >> a >> b >> c;
    SeriOlustur(a,b,c);
    return 0;
}
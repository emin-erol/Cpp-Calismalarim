#include <iostream>
using namespace std;

void AsallariYaz(int baslangic,int N){
    int i,sayac = 0;
    if(baslangic <= N){
        if(baslangic == 2) cout << baslangic << endl;
        else {
            if(baslangic > 2){
                for(i = 2;i<baslangic;i++){
                    if(baslangic%i == 0) sayac++;
                }
                if(sayac == 0) cout << baslangic << endl;
                else sayac = 0;
            }
        }
    }
    else exit(0);
    AsallariYaz(baslangic+1,N);
}

int main(){
    int n;
    cout << "Lutfen bir sayi giriniz: ";
    cin >> n;
    AsallariYaz(0,n);
    return 0;
}
#include <iostream>
#include <ctime>
using namespace std;

int Sirala(int *dizi,int adet){
    int gecici;
    for(int i=adet-1;i>=0;i--){
        for(int j=0;j<i;j++){
            if(dizi[j] > dizi[j+1]){
                gecici = dizi[j];
                dizi[j] = dizi[j+1];
                dizi[j+1] = gecici;
            }
        }
    }
    return *dizi;
}

int main(){
    int n;
    cout << "Olusturulacak dizinin eleman sayisini giriniz: ";
    cin >> n;
    int dizi[n];
    srand(time(NULL));
    cout << "Dizinin ilk hali: ";
    for(int i=0;i<n;i++){
        dizi[i] = rand()%50;
        cout << dizi[i] << "  ";
    }
    Sirala(dizi,n);
    cout << "Dizinin siralanmis hali: ";
    for(int i=0;i<n;i++)
        cout << dizi[i] << "  ";
    return 0;
}
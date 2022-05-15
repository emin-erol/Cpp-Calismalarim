#include <iostream>
#include <ctime>
using namespace std;

int Sirala(int *dizi,int adet){
    int min,gecici;
    for(int i=0;i<adet-1;i++){
        min = i;
        for(int j=i+1;j<adet;j++){
            if(dizi[min] > dizi[j]) min = j;
        }
        if(min != i){
            gecici = dizi[min];
            dizi[min] = dizi[i];
            dizi[i] = gecici;
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
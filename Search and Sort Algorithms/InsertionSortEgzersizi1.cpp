#include <iostream>
#include <ctime>
using namespace std;

int Sirala(int *dizi,int adet){
    int j,gecici;
    for(int i=0;i<adet-1;i++){
        j = i+1;
        while(j>0 && dizi[j] < dizi[j-1]){
            gecici = dizi[j];
            dizi[j] = dizi[j-1];
            dizi[j-1] = gecici;
            j--;
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
    cout << endl << "Dizinin siralanmis hali: ";
    for(int i=0;i<n;i++)
        cout << dizi[i] << "  ";
    return 0;
}
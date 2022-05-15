#include <iostream>
#include <time.h>
using namespace std;

int main(){
    int n,konum,gecici;
    cout << "Lutfen eleman sayisini giriniz: ";
    cin >> n;
    int dizi[n];
    for(int i=0;i<n;i++){
        dizi[i] = rand()%100;
    }
    cout << "Dizi: ";
    for(int i=0;i<n;i++){
        cout << dizi[i] << "  ";
    }
    for(int i=0;i<n-1;i++){
        konum = i;
        for(int j=i+1;j<n;j++){
            if(dizi[konum] > dizi[j]) konum = j;
        }
        if(konum != i){
            gecici = dizi[konum];
            dizi[konum] = dizi[i];
            dizi[i] = gecici;
        }
    }
    cout << endl << "Siralanmis hali: ";
    for(int i=0;i<n;i++){
        cout << dizi[i] << "  ";
    }
    return 0;
}
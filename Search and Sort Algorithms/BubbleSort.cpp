#include <iostream>
#include <time.h>
using namespace std;

int main(){
    int n,gecici;
    cout << "Dizinin eleman sayisini giriniz: ";
    cin >> n;
    int dizi[n];
    srand(time(NULL));
    for(int i=0;i<n;i++){
        dizi[i] = rand()%100;
    }
    cout << "Dizi: ";
    for(int i=0;i<n;i++){
        cout << dizi[i] << "  ";
    }
    for(int i=n-1;i>0;i--){
        for(int j=0;j<i;j++){
            if(dizi[j] > dizi[j+1]){
                gecici = dizi[j];
                dizi[j] = dizi[j+1];
                dizi[j+1] = gecici;
            }
        }
    }
    cout << endl << "Siralanmis dizi: ";
    for(int i=0;i<n;i++){
        cout << dizi[i] << "  ";
    }
    return 0;
}
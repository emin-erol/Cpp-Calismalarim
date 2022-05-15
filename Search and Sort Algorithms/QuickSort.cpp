#include <iostream>
#include <time.h>
using namespace std;

void QuickSort(int D[],int ilk,int son){
    int gecici,pivot,i,j,a;
    if(ilk < son){
        pivot = ilk;
        i = ilk;
        j = son;
        while(i < j){
            while(D[i] <= D[pivot] && i < son) i++;
            while(D[j] > D[pivot]) j--;
            if(i < j){
                gecici = D[i];
                D[i] = D[j];
                D[j] = gecici;
            }
        }
        gecici = D[pivot];
        D[pivot] = D[j];
        D[j] = gecici;
        cout << endl << "Siralanan dizi: ";
        for(a=0;a<7;a++){
            cout << D[a] << "  ";
        }
        QuickSort(D,ilk,j-1);
        QuickSort(D,j+1,son);
    }
}

int main(){
    int n;
    cout << "Dizinin eleman sayisini giriniz: ";
    cin >> n;
    int dizi[n];
    for(int i=0;i<n;i++){
        dizi[i] = rand()%100;
    }
    cout << "Dizi: ";
    for(int i=0;i<n;i++){
        cout << dizi[i] << "  ";
    }
    QuickSort(dizi,0,n-1);
    return 0;
}
#include <iostream>
#include <ctime>
using namespace std;

void Sirala(int i,int n,int dizim[]){
    int gecici = 0;
    if(i < n){
        for(int j=i+1;j<n-1;j++){
            if(dizim[i] > dizim[j]){
                gecici = dizim[j];
                dizim[j] = dizim[i];
                dizim[i] = gecici;
            }
        }
        Sirala(i+1,n,dizim);
    }
    else {
        for(int j=0;j<n;j++){
            cout << dizim[j] << "  ";
        }
    }
}

int main(){
    int N;
    cout << "Dizinin eleman sayisini girin: ";
    cin >> N;
    int dizi[N];
    srand(time(NULL));
    for(int i=0;i<N;i++){
        dizi[i] = rand()%100;
    }
    Sirala(0,N,dizi);
    return 0;
}
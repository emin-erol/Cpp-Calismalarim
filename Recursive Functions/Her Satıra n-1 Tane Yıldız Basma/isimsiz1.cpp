#include <iostream>
using namespace std;

void SekliYazdir(int y){
    if(y > 0){
        for(int i=0;i<y;i++){
            cout << "*";
        }
        cout << endl;
        SekliYazdir(y-1);
    }
    exit(0);
}

int main(){
    int N;
    cout << "Bir sayi giriniz: ";
    cin >> N;
    SekliYazdir(N);
    return 0;
}
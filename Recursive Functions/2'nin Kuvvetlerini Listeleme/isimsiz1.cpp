#include <iostream>
#include <cmath>
using namespace std;

void IkininUsleri(int i,int u,int a){
    if(u != a){
        cout << pow(i,u) << "  ";
        IkininUsleri(i,u+1,a);
    }
    exit(0);
}

int main(){
    int adet;
    cout << "Sayi adetini giriniz: ";
    cin >> adet;
    IkininUsleri(2,0,adet);
    return 0;
}
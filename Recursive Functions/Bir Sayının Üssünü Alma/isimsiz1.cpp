#include <iostream>
using namespace std;

int UsAlma(int b,int t,int u,int sayi){
    if(b <= u){
        return UsAlma(b+1,t,u,sayi*t);
    }
    else {
        return sayi;
    }
}

int main(){
    int taban,us;
    cout << "Taban ve Us degerini giriniz: ";
    cin >> taban >> us;
    cout << taban << "^" << us << " = " << UsAlma(1,taban,us,1);
    return 0;
}
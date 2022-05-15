#include <iostream>
using namespace std;

int BolmeIslemi(int bolunen,int bolen,int bolum){
    if(bolunen >= bolen){
        return BolmeIslemi(bolunen-bolen,bolen,bolum+1);
    }
    else {
        return bolum;
    }
}

int main(){
    int a,b;
    cout << "Bolunen ve bolen degerlerini giriniz: ";
    cin >> a >> b;
    cout << a << " / " << b << " = " << BolmeIslemi(a,b,0);
    return 0;
}
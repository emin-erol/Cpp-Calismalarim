#include <iostream>
#include <cstring>
using namespace std;

void TerstenYaz(int b,char cumlem[],char cumlem2[]){
    if(b != strlen(cumlem)){
        cumlem2[b] = cumlem[strlen(cumlem)-b-1];
        TerstenYaz(b+1,cumlem,cumlem2);
    }
    else {
        cout << "Cumlenin tersten yazilisi: " << cumlem2;
    }
}

int main(){
    char yeni[50],cumle[50];
    cout << "Bir cumle giriniz: ";
    gets(cumle);
    TerstenYaz(0,cumle,yeni);
    return 0;
}
#include <iostream>
using namespace std;

int KarakterSayisiniBul(char cumlem[],int s){
    if(cumlem[s] != '\0'){
        return KarakterSayisiniBul(cumlem,s+1);
    }
    else {
        return s;
    }
}

int main(){
    int sayac = 0;
    char cumle[50];
    cout << "Bir cumle giriniz: ";
    gets(cumle);
    cout << "Cumledeki karakter sayisi: " << KarakterSayisiniBul(cumle,sayac);
    return 0;
}
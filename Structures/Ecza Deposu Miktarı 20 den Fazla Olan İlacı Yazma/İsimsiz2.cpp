#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Ilaclar{
	char ilac_adi[20];
	int fiyat;
	int adet;
};

int main(){
	Ilaclar ilac[5];
	int sayac = 0;
	for(int i=0;i<5;i++){
		cout << i+1 << ". Ilacin adini giriniz: ";
		cin >> ilac[i].ilac_adi;
		cout << "Ilacin fiyatini giriniz: ";
		cin >> ilac[i].fiyat;
		cout << "Ilacin adetini giriniz: ";
		cin >> ilac[i].adet;
	}
	cout << "Miktari 20 den fazla olan ilaclar:" << endl;
	for(int i=0;i<5;i++){
		cout << endl;
		if(ilac[i].adet >= 20){
			cout << i+1 << ". Ilac adi: " << ilac[i].ilac_adi << endl;
			cout << "Ilacin fiyati: " << ilac[i].fiyat << endl;
			cout << "Ilacin adeti: " << ilac[i].adet << endl;
			sayac++;
		}
	}
	if(sayac == 0){
		cout << "Miktari 20 den fazla olan ilac bulunmamaktadir." << endl;
	}
	return 0;
}


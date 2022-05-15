#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Personeller{
	char ad[10];
	int yas;
	int maas;
};

void PersonelleriSirala(struct Personeller Personel[],int i){
	int m,n;
	for(m=0;m<i;m++){
		for(n=m+1;n<i;n++){
			if(Personel[m].ad[0]-65 > Personel[n].ad[0]-65){
				struct Personeller gecici;
				gecici = Personel[m];
				Personel[m] = Personel[n];
				Personel[n] = gecici;
			}
		}
	}
}

void PersonelleriYazdir(struct Personeller Personel[],int i){
	for(int j=0;j<i;j++){
		cout << j+1 << ". Personelin;" << endl;
		cout << "Adi: " << Personel[j].ad << endl;
		cout << "Yasi: " << Personel[j].yas << endl;
		cout << "Maasi: " << Personel[j].maas << endl;
	}
}

int main(){
	Personeller Personel[3];
	for(int i=0;i<3;i++){
		cout << "Personel Adi: ";
		cin >> Personel[i].ad;
		cout << "Personel Yasi: ";
		cin >> Personel[i].yas;
		cout << "Personel Maasi: ";
		cin >> Personel[i].maas;
	}
	cout << endl << "Personeller Siralaniyor..." << endl;
	PersonelleriSirala(Personel,3);
	cout << endl << "Personeller Yazdiriliyor..." << endl;
	PersonelleriYazdir(Personel,3);
	return 0;
}


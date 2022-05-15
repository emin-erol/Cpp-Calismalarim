#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Oyuncular{
	char ad[10];
	char soyad[10];
	int yas;
};

struct Ekipler{
	char ekip_adi[10];
	struct Oyuncular oyuncu[2];
};

void oyunculari_al(struct Oyuncular *b,int a){
	cout << "Adi: ";
	cin >> b->ad;
	cout << "Soyadi: ";
	cin >> b->soyad;
	cout << "Yasi: ";
	cin >> b->yas;
}

void ekipleri_al(struct Ekipler *e,int m){
	cout << m+1 << ". Ekibin adi: ";
	cin >> e->ekip_adi;
	for(int i=0;i<2;i++){
		cout << i+1 << ". Oyuncu:" << endl;
		oyunculari_al(&e->oyuncu[i],i);
	}
}

void yazdir(struct Ekipler ekips[],int c){
	cout << endl;
	for(int i=0;i<c;i++){
		cout << ekips[i].ekip_adi << " Ekibi" << endl;
		for(int j=0;j<2;j++){
			cout << j+1 << ". Oyuncu:" << endl;
			cout << "Adi: " << ekips[i].oyuncu[j].ad << endl;
			cout << "Soyadi: " << ekips[i].oyuncu[j].soyad << endl;
			cout << "Yasi: " << ekips[i].oyuncu[j].yas << endl;
		}
		cout << endl;
	}
}

int main(){
	int sayi;
	cout << "Ekip sayisini giriniz: ";
	cin >> sayi;
	struct Ekipler ekip[sayi];
	for(int i=0;i<sayi;i++){
		ekipleri_al(&ekip[i],i);
	}
	yazdir(ekip,sayi);
	return 0;
}


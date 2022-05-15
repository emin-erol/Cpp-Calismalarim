#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int secim;

struct Musteriler{
	char ad[10];
	char soyad[10];
	int hesap = 0;
	bool kahvalti = 0;
	bool aksam_yemegi = 0;
	bool otel = 0;
	bool arkadas = 0;
};

void bilgileri_al(struct Musteriler musteri[],int a){
	for(int i=0;i<a;i++){
		cout << i+1 << ". m��terinin:" << endl;
		cout << "Ad�: ";
		cin >> musteri[i].ad;
		cout << "Soyad�: ";
		cin >> musteri[i].soyad;
	}
}

void otel_hizmeti(struct Musteriler musteri[],int a){
	for(int i=0;i<a;i++){
		cout << "Otel Hizmeti:" << endl;
		cout << "1 -> �� Y�ld�zl� Otel- - - - 100�" << endl;
		cout << "2 -> Be� Y�ld�zl� Otel - - - 150�" << endl;
		cout << "3 -> �stemiyorum" << endl;
		cin >> secim;
		if(secim == 1){
			musteri[i].otel = 1;
			cout << "1 -> Tek Ki�i" << endl;
			cout << "2 -> �ki Ki�i" << endl;
			cin >> secim;
			if(secim == 1){
				musteri[i].hesap += 100;
			} 
			if(secim == 2){
				musteri[i].hesap += 50;
				musteri[i].arkadas = 1;
			}
		}
		if(secim == 2){
			musteri[i].otel = 1;
			cout << "1 -> Tek Ki�i" << endl;
			cout << "2 -> �ki Ki�i" << endl;
			cin >> secim;
			if(secim == 1){
				musteri[i].hesap += 150;
			}
			if(secim == 2){
				musteri[i].hesap += 75;
				musteri[i].arkadas = 1;
			}
		}
	}
}

void yemek_hizmeti(struct Musteriler musteri[],int a){
	for(int i=0;i<a;i++){
		cout << musteri[i].ad << " " << musteri[i].soyad << ", l�tfen yemek se�iminizi yap�n�z:" << endl;
		cout << "1 -> Kahvalt� - - - - - - - - -  50�" << endl;
		cout << "2 -> Ak�am Yeme�i - - - - - - -  70�" << endl;
		cout << "3 -> Kahvalt� + Ak�am Yeme�i- - 100�" << endl;
		cout << "4 -> �stemiyorum" << endl;
		cin >> secim;
		if(secim == 1){
			musteri[i].hesap += 50;
			musteri[i].kahvalti = 1;
		}
		if(secim == 2){
			musteri[i].hesap += 70;
			musteri[i].aksam_yemegi = 1;
		}
		if(secim == 3){
			musteri[i].hesap += 100;
			musteri[i].kahvalti = 1;
			musteri[i].aksam_yemegi = 1;
		}
	}
}

void yazdir(struct Musteriler musteri[],int a){
	cout << endl;
	for(int i=0;i<a;i++){
		cout << musteri[i].ad << " " << musteri[i].soyad << " adl� m��teri:" << endl;
		cout << "Konaklama: ";
		if(musteri[i].otel == 1){
			cout << "Otel";
			if(musteri[i].arkadas == 1){
				cout << " (�ki Ki�i)" << endl;
			}
			else {
				cout << " (Tek Ki�i)" << endl;
			}
		}
		else {
			cout << " Yok" << endl;
		}
		cout << "Yemek Hizmeti: ";
		if(musteri[i].kahvalti == 1 && musteri[i].aksam_yemegi == 1){
			cout << "Kahvalt� ve Ak�am Yeme�i" << endl;
		}
		else if(musteri[i].kahvalti == 1 && musteri[i].aksam_yemegi == 0){
			cout << "Kahvalt�" << endl;
		}
		else if(musteri[i].kahvalti == 0 && musteri[i].aksam_yemegi == 1){
			cout << "Ak�am Yeme�i" << endl;
		}
		else {
			cout << "Yok" << endl;
		}
		cout << "Hesap: " << musteri[i].hesap << endl;
		cout << endl;
	}
}

int main(){
	setlocale(LC_ALL,"Turkish");
	int adet;
	cout << "\tEM�N ORGAN�ZASYON" << endl;
	cout << endl << "L�tfen m��teri say�s�n� giriniz: ";
	cin >> adet;
	Musteriler musteri[adet];
	bilgileri_al(musteri,adet);
	otel_hizmeti(musteri,adet);
	yemek_hizmeti(musteri,adet);
	yazdir(musteri,adet);
	return 0;
}


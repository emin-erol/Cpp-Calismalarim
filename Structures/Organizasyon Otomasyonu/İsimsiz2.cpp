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
		cout << i+1 << ". müþterinin:" << endl;
		cout << "Adý: ";
		cin >> musteri[i].ad;
		cout << "Soyadý: ";
		cin >> musteri[i].soyad;
	}
}

void otel_hizmeti(struct Musteriler musteri[],int a){
	for(int i=0;i<a;i++){
		cout << "Otel Hizmeti:" << endl;
		cout << "1 -> Üç Yýldýzlý Otel- - - - 100€" << endl;
		cout << "2 -> Beþ Yýldýzlý Otel - - - 150€" << endl;
		cout << "3 -> Ýstemiyorum" << endl;
		cin >> secim;
		if(secim == 1){
			musteri[i].otel = 1;
			cout << "1 -> Tek Kiþi" << endl;
			cout << "2 -> Ýki Kiþi" << endl;
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
			cout << "1 -> Tek Kiþi" << endl;
			cout << "2 -> Ýki Kiþi" << endl;
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
		cout << musteri[i].ad << " " << musteri[i].soyad << ", lütfen yemek seçiminizi yapýnýz:" << endl;
		cout << "1 -> Kahvaltý - - - - - - - - -  50€" << endl;
		cout << "2 -> Akþam Yemeði - - - - - - -  70€" << endl;
		cout << "3 -> Kahvaltý + Akþam Yemeði- - 100€" << endl;
		cout << "4 -> Ýstemiyorum" << endl;
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
		cout << musteri[i].ad << " " << musteri[i].soyad << " adlý müþteri:" << endl;
		cout << "Konaklama: ";
		if(musteri[i].otel == 1){
			cout << "Otel";
			if(musteri[i].arkadas == 1){
				cout << " (Ýki Kiþi)" << endl;
			}
			else {
				cout << " (Tek Kiþi)" << endl;
			}
		}
		else {
			cout << " Yok" << endl;
		}
		cout << "Yemek Hizmeti: ";
		if(musteri[i].kahvalti == 1 && musteri[i].aksam_yemegi == 1){
			cout << "Kahvaltý ve Akþam Yemeði" << endl;
		}
		else if(musteri[i].kahvalti == 1 && musteri[i].aksam_yemegi == 0){
			cout << "Kahvaltý" << endl;
		}
		else if(musteri[i].kahvalti == 0 && musteri[i].aksam_yemegi == 1){
			cout << "Akþam Yemeði" << endl;
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
	cout << "\tEMÝN ORGANÝZASYON" << endl;
	cout << endl << "Lütfen müþteri sayýsýný giriniz: ";
	cin >> adet;
	Musteriler musteri[adet];
	bilgileri_al(musteri,adet);
	otel_hizmeti(musteri,adet);
	yemek_hizmeti(musteri,adet);
	yazdir(musteri,adet);
	return 0;
}


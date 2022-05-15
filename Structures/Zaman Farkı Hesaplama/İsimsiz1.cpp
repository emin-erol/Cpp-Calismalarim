#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Zaman{
	int saat;
	int dakika;
	int saniye;
};

void FarkiHesapla(Zaman z1,Zaman z2,Zaman *fark){
	if(z2.saat < z1.saat){
		fark->saniye = 60 - z1.saniye + z2.saniye;
		if(fark->saniye > 59){
			fark->saniye -= 60;
			fark->dakika += 1;
			if(fark->dakika > 59){
				fark->dakika -= 60;
				fark->saat += 1;
			}
		}
		fark->dakika = 59 - z1.dakika + z2.dakika;
		if(fark->dakika > 59){
			fark->dakika -= 60;
			fark->saat += 1;
		}
		fark->saat = 23 - z1.saat + z2.saat;
	}
	if(z2.saat > z1.saat){
		if(z2.saniye < z1.saniye){
			fark->saniye = z2.saniye - z1.saniye + 60;
			z2.dakika -= 1;
			if(z2.dakika < z1.dakika){
				fark->dakika = z2.dakika - z1.dakika + 60;
				z2.saat -= 1;
				fark->saat = z2.saat - z1.saat;
			}
			else{
				fark->dakika = z2.dakika - z1.dakika;
				fark->saat = z2.saat - z1.saat;
			}
		}
		else {
			fark->saniye = z2.saniye - z1.saniye;
			if(z2.dakika < z1.dakika){
				fark->dakika = z2.dakika - z1.dakika + 60;
				z2.saat -= 1;
			}
			else{
				fark->dakika = z2.dakika - z1.dakika;
			}
			fark->saat = z2.saat - z1.saat;
		}
	}
	cout << "Zaman farki = " << fark->saat << ":" << fark->dakika << ":" << fark->saniye << endl;
}

int main(){
	Zaman zaman1,zaman2,fark;
	cout << "Baslangic saatini giriniz: ";
	cin >> zaman1.saat >> zaman1.dakika >> zaman1.saniye;
	cout << "Bitis saatini yaziniz: ";
	cin >> zaman2.saat >> zaman2.dakika >> zaman2.saniye;
	FarkiHesapla(zaman1,zaman2,&fark);
	return 0;
}


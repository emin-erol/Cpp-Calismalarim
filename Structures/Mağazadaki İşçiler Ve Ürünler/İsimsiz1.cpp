#include <iostream>
#include <string.h>
using namespace std;

/*
	Her biri 3 i��iye ve 5 �r�ne sahip Ma�aza struct�n� olu�turduk. Kullan�c� ma�aza say�s�n� girdikten sonra
struct� MagazalariDoldur() fonksiyonuna g�nderdik, burada magaza bilgileri kullan�c�dan al�nd�ktan sonra i��i
bilgilerini almak i�in struct� bu sefer IscileriDoldur() fonksiyonuna ve �r�n bilgilerini almak i�in ise
UrunleriDoldur() fonksiyonuna g�nderdik.
	Burada doldurulan t�m bilgileri yazd�rma fonksiyonlar� ile s�ras�yla yazd�rd�k (MagazalariYazdir(),
IscileriYazdir(), UrunleriYazdir())
	Ma�azalardaki �al��anlar�n ya�lar�n� gezerek en ya�l�y� bulan BuyukYasiBul() fonksiyonunu kime ait oldu-
�unu bulmak ve yazd�rmak i�in YasliyiBastir() fonksiyonuna g�ndererek ad�, soyad� ve ya��n� yazd�rarak en ya�-
l� i��inin kim oldu�unu bulduk
	Ma�azalar�n sat�� rekorlar�n� tek tek tarayarak hangi ma�azan�n en �ok sat��a sahip oldu�unu bulup yazd�rd�k.
	Her ma�azan�n �r�n fiyatlar�n� gezerek kendi i�inde �r�n fiyatlar�n�n ortalamalar�n� yazd�rd�k.
 */

struct Isciler{
	char isci_adi[10];
	char isci_soyadi[10];
	int yas;
};

struct Urunler{
	int urun_kodu;
	int fiyat;
};

struct Magazalar{
	char magaza_adi[20];
	char tel[15];
	int satis;
	struct Isciler isci[3];
	struct Urunler urun[5];
};

void IscileriDoldur(Magazalar m[],int a){
	for(int i=0;i<a;i++){
		cout << m[i].magaza_adi << " Ma�azas�n�n; " << endl;
		for(int j=0;j<3;j++){
			cout << j+1 << ". ��ci Ad�: ";
			cin >> m[i].isci[j].isci_adi;
			cout << "Soyad�: ";
			cin >> m[i].isci[j].isci_soyadi;
			cout << "Ya��: ";
			cin >> m[i].isci[j].yas;
		}
	}
}

void UrunleriDoldur(Magazalar m[],int a){
	for(int i=0;i<a;i++){
		cout << m[i].magaza_adi << " Ma�azas�n�n; " << endl;
		for(int j=0;j<5;j++){
			cout << j+1 << ". �r�n�n Kodu: ";
		cin >> m[i].urun[j].urun_kodu;
		cout << "Fiyat�: ";
		cin >> m[i].urun[j].fiyat;
		}
	}
}

void MagazaDoldur(struct Magazalar m[],int a){
	for(int i=0;i<a;i++){
		cout << i+1 << ". Ma�aza Ad�: ";
		cin >> m[i].magaza_adi;
		cout << "Telefon Numaras�: ";
		cin >> m[i].tel;
		cout << "Sat�� Miktar�: ";
		cin >> m[i].satis;
	}
	IscileriDoldur(m,a);
	UrunleriDoldur(m,a);
}

void IscileriYazdir(Magazalar m[],int a){
	for(int i=0;i<a;i++){
		cout << endl << m[i].magaza_adi << " Ma�azas� �al��anlar�;" << endl;
		for(int j=0;j<3;j++){
			cout << endl << j+1 << ". ���i;" << endl << endl;
			cout << "Ad�: " << m[i].isci[j].isci_adi << endl;
			cout << "Soyad�: " << m[i].isci[j].isci_soyadi << endl;
			cout << "Ya��: " << m[i].isci[j].yas << endl;
		}
	}
}

void UrunleriYazdir(Magazalar m[],int a){
	for(int i=0;i<a;i++){
		cout << endl << m[i].magaza_adi << " Ma�azas� �r�nleri;" << endl;
		for(int j=0;j<5;j++){
			cout << endl << j+1 << ". �r�n;" << endl << endl;
			cout << "�r�n Kodu: " << m[i].urun[j].urun_kodu << endl;
			cout << "�r�n Fiyat�: " << m[i].urun[j].fiyat << endl;
		}
	}
}

void MagazalariYazdir(Magazalar m[],int a){
	for(int i=0;i<a;i++){
		cout << endl << i+1 << ". Ma�aza;" << endl << endl;;
		cout << "Ad�: " << m[i].magaza_adi << endl;
		cout << "Telefon Numaras�: " << m[i].tel << endl;
		cout << "Sat�� Miktar�: " << m[i].satis << endl;
	}
	cout << endl << "\t����LER" << endl;
	IscileriYazdir(m,a);
	cout << endl << "\t�R�NLER" << endl;
	UrunleriYazdir(m,a);
}

void YasliyiBastir(Magazalar m[],int b_yas,int m_s){
	for(int i=0;i<m_s;i++){
		for(int j=0;j<3;j++){
			if(b_yas == m[i].isci[j].yas){
				cout << endl << "En ya�l� i��i " << m[i].isci[j].isci_adi << " " << m[i].isci[j].isci_soyadi;
				cout << " ve ya�� " << m[i].isci[j].yas << endl << endl;
				break;
			}
		}
	}
}

void BuyukYasiBul(Magazalar m[],int m_s){
	int buyuk_yas = 0;
	for(int i=0;i<m_s;i++){
		for(int j=0;j<3;j++){
			if(m[i].isci[j].yas > buyuk_yas) buyuk_yas = m[i].isci[j].yas;
		}
	}
	YasliyiBastir(m,buyuk_yas,m_s);
}

void OrtalamaUrunFiyati(Magazalar m[],int m_s){
	int toplam = 0;
	for(int i=0;i<m_s;i++){
		for(int j=0;j<5;j++){
			toplam += m[i].urun[j].fiyat;
		}
		cout << m[i].magaza_adi << " Ma�azas�n�n Ortalama �r�n Fiyat�: " << toplam/5 << " TL" << endl << endl;
	}
}
void SatisRekorunuBul(Magazalar m[],int a){
	int rekor=0;
	for(int i=0;i<a;i++){
		if(m[i].satis > rekor) rekor = m[i].satis;
	}
	for(int i=0;i<a;i++){
		if(rekor == m[i].satis){
			cout << endl << "Sat�� rekoru " << rekor << " adet ile " << m[i].magaza_adi << " ma�azas�na aittir.";
		}
	}
}

int main(){
	int i,magaza_sayisi;
	setlocale(LC_ALL,"Turkish");
	cout << "L�tfen ma�aza say�s�n� giriniz: ";
	cin >> magaza_sayisi;
	struct Magazalar magaza[magaza_sayisi];
	MagazaDoldur(magaza,magaza_sayisi);
	cout << endl << "\tMA�AZALAR" << endl;
	MagazalariYazdir(magaza,magaza_sayisi);
	BuyukYasiBul(magaza,magaza_sayisi);
	OrtalamaUrunFiyati(magaza,magaza_sayisi);
	SatisRekorunuBul(magaza,magaza_sayisi);
	return 0;
}


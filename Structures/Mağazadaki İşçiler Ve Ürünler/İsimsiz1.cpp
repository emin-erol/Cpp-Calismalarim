#include <iostream>
#include <string.h>
using namespace std;

/*
	Her biri 3 iþçiye ve 5 ürüne sahip Maðaza structýný oluþturduk. Kullanýcý maðaza sayýsýný girdikten sonra
structý MagazalariDoldur() fonksiyonuna gönderdik, burada magaza bilgileri kullanýcýdan alýndýktan sonra iþçi
bilgilerini almak için structý bu sefer IscileriDoldur() fonksiyonuna ve ürün bilgilerini almak için ise
UrunleriDoldur() fonksiyonuna gönderdik.
	Burada doldurulan tüm bilgileri yazdýrma fonksiyonlarý ile sýrasýyla yazdýrdýk (MagazalariYazdir(),
IscileriYazdir(), UrunleriYazdir())
	Maðazalardaki çalýþanlarýn yaþlarýný gezerek en yaþlýyý bulan BuyukYasiBul() fonksiyonunu kime ait oldu-
ðunu bulmak ve yazdýrmak için YasliyiBastir() fonksiyonuna göndererek adý, soyadý ve yaþýný yazdýrarak en yaþ-
lý iþçinin kim olduðunu bulduk
	Maðazalarýn satýþ rekorlarýný tek tek tarayarak hangi maðazanýn en çok satýþa sahip olduðunu bulup yazdýrdýk.
	Her maðazanýn ürün fiyatlarýný gezerek kendi içinde ürün fiyatlarýnýn ortalamalarýný yazdýrdýk.
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
		cout << m[i].magaza_adi << " Maðazasýnýn; " << endl;
		for(int j=0;j<3;j++){
			cout << j+1 << ". Ýþci Adý: ";
			cin >> m[i].isci[j].isci_adi;
			cout << "Soyadý: ";
			cin >> m[i].isci[j].isci_soyadi;
			cout << "Yaþý: ";
			cin >> m[i].isci[j].yas;
		}
	}
}

void UrunleriDoldur(Magazalar m[],int a){
	for(int i=0;i<a;i++){
		cout << m[i].magaza_adi << " Maðazasýnýn; " << endl;
		for(int j=0;j<5;j++){
			cout << j+1 << ". Ürünün Kodu: ";
		cin >> m[i].urun[j].urun_kodu;
		cout << "Fiyatý: ";
		cin >> m[i].urun[j].fiyat;
		}
	}
}

void MagazaDoldur(struct Magazalar m[],int a){
	for(int i=0;i<a;i++){
		cout << i+1 << ". Maðaza Adý: ";
		cin >> m[i].magaza_adi;
		cout << "Telefon Numarasý: ";
		cin >> m[i].tel;
		cout << "Satýþ Miktarý: ";
		cin >> m[i].satis;
	}
	IscileriDoldur(m,a);
	UrunleriDoldur(m,a);
}

void IscileriYazdir(Magazalar m[],int a){
	for(int i=0;i<a;i++){
		cout << endl << m[i].magaza_adi << " Maðazasý Çalýþanlarý;" << endl;
		for(int j=0;j<3;j++){
			cout << endl << j+1 << ". Ýþçi;" << endl << endl;
			cout << "Adý: " << m[i].isci[j].isci_adi << endl;
			cout << "Soyadý: " << m[i].isci[j].isci_soyadi << endl;
			cout << "Yaþý: " << m[i].isci[j].yas << endl;
		}
	}
}

void UrunleriYazdir(Magazalar m[],int a){
	for(int i=0;i<a;i++){
		cout << endl << m[i].magaza_adi << " Maðazasý Ürünleri;" << endl;
		for(int j=0;j<5;j++){
			cout << endl << j+1 << ". Ürün;" << endl << endl;
			cout << "Ürün Kodu: " << m[i].urun[j].urun_kodu << endl;
			cout << "Ürün Fiyatý: " << m[i].urun[j].fiyat << endl;
		}
	}
}

void MagazalariYazdir(Magazalar m[],int a){
	for(int i=0;i<a;i++){
		cout << endl << i+1 << ". Maðaza;" << endl << endl;;
		cout << "Adý: " << m[i].magaza_adi << endl;
		cout << "Telefon Numarasý: " << m[i].tel << endl;
		cout << "Satýþ Miktarý: " << m[i].satis << endl;
	}
	cout << endl << "\tÝÞÇÝLER" << endl;
	IscileriYazdir(m,a);
	cout << endl << "\tÜRÜNLER" << endl;
	UrunleriYazdir(m,a);
}

void YasliyiBastir(Magazalar m[],int b_yas,int m_s){
	for(int i=0;i<m_s;i++){
		for(int j=0;j<3;j++){
			if(b_yas == m[i].isci[j].yas){
				cout << endl << "En yaþlý iþçi " << m[i].isci[j].isci_adi << " " << m[i].isci[j].isci_soyadi;
				cout << " ve yaþý " << m[i].isci[j].yas << endl << endl;
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
		cout << m[i].magaza_adi << " Maðazasýnýn Ortalama Ürün Fiyatý: " << toplam/5 << " TL" << endl << endl;
	}
}
void SatisRekorunuBul(Magazalar m[],int a){
	int rekor=0;
	for(int i=0;i<a;i++){
		if(m[i].satis > rekor) rekor = m[i].satis;
	}
	for(int i=0;i<a;i++){
		if(rekor == m[i].satis){
			cout << endl << "Satýþ rekoru " << rekor << " adet ile " << m[i].magaza_adi << " maðazasýna aittir.";
		}
	}
}

int main(){
	int i,magaza_sayisi;
	setlocale(LC_ALL,"Turkish");
	cout << "Lütfen maðaza sayýsýný giriniz: ";
	cin >> magaza_sayisi;
	struct Magazalar magaza[magaza_sayisi];
	MagazaDoldur(magaza,magaza_sayisi);
	cout << endl << "\tMAÐAZALAR" << endl;
	MagazalariYazdir(magaza,magaza_sayisi);
	BuyukYasiBul(magaza,magaza_sayisi);
	OrtalamaUrunFiyati(magaza,magaza_sayisi);
	SatisRekorunuBul(magaza,magaza_sayisi);
	return 0;
}


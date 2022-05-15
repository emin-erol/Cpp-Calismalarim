#include <iostream>
#include <cstring>
using namespace std;

struct Kayit{
    char isim[20];
    char soyisim[20];
    float tc_no;
    char okul_no[20];
    int sinif;
    struct Kayit *siradaki;
};

struct Kayit *baslangic = NULL;
struct Kayit *gecici = NULL;

void OgrKayit(char ad[],char soyad[],float tc,char no[],int s){
    struct Kayit *eklenecek = (Kayit *)malloc(sizeof(Kayit));
    strcpy(eklenecek->isim,ad);
    strcpy(eklenecek->soyisim,soyad);
    eklenecek->tc_no = tc;
    strcpy(eklenecek->okul_no,no);
    eklenecek->sinif = s;
    eklenecek->siradaki = NULL;
    if(baslangic == NULL){
        baslangic = eklenecek;
    }
    else {
        gecici = baslangic;
        while(gecici->siradaki != NULL){
            gecici = gecici->siradaki;
        }
        gecici->siradaki = eklenecek;
    }
}

void BastanSil(){
    gecici = baslangic->siradaki;
    free(baslangic);
    baslangic  = gecici;
}

void OgrKayitSil(float tc){
    gecici = baslangic;
    if(baslangic->tc_no == tc){
        BastanSil();
    }
    while(gecici->siradaki->tc_no != tc){
        gecici = gecici->siradaki;
    }
    Kayit *onceki = NULL;
    Kayit *sonraki = NULL;
    onceki = gecici;
    sonraki = gecici->siradaki->siradaki;
    free(gecici->siradaki);
    onceki->siradaki = sonraki;
}

void KayitlariYazdir(){
    gecici = baslangic;
    cout << endl << " - KAYITLAR -" << endl << endl;
    if(gecici == NULL){
        cout << "Ogrenci Adi: " << gecici->isim << endl;
        cout << "Soyadi: " << gecici->soyisim << endl;
        cout << "TC Kimlik No: " << gecici->tc_no << endl;
        cout << "Okul No: " << gecici->okul_no << endl;
        cout << "Sinif: " << gecici->sinif << endl;
    }
    else {
        while(gecici->siradaki != NULL){
            cout << "Ogrenci Adi: " << gecici->isim << endl;
            cout << "Soyadi: " << gecici->soyisim << endl;
            cout << "TC Kimlik No: " << gecici->tc_no << endl;
            cout << "Okul No: " << gecici->okul_no << endl;
            cout << "Sinif: " << gecici->sinif << endl << endl;
            gecici = gecici->siradaki;
        }
        cout << "Ogrenci Adi: " << gecici->isim << endl;
        cout << "Soyadi: " << gecici->soyisim << endl;
        cout << "TC Kimlik No: " << gecici->tc_no << endl;
        cout << "Okul No: " << gecici->okul_no << endl;
        cout << "Sinif: " << gecici->sinif << endl;
    }
}

int main(){
    float tc;
    char ad[20],soyad[20],no[20];
    int secim,s;
    while (true){
        cout << " - Ogrenci Kayit Otomasyonu - " << endl << endl;
        cout << "1.) Kayit Yapma" << endl;
        cout << "2.) Kayit Silme" << endl;
        cout << "3.) Kayitlari Goster" << endl;
        cout << "4.) Programdan Cikis" << endl << endl;
        cout << "Tuslama yapiniz: ";
        cin >> secim;
        cout << endl;
        switch (secim){
        case 1:
            cout << "Ogrenci Adi: ";
            cin >> ad;
            cout << "Soyadi: ";
            cin >> soyad;
            cout << "TC. Kimlik No: ";
            cin >> tc;
            cout << "Okul No: ";
            cin >> no;
            cout << "Sinif: ";
            cin >> s;
            OgrKayit(ad,soyad,tc,no,s);
            break;
        case 2:
            cout << "TC No Giriniz: ";
            cin >> tc;
            OgrKayitSil(tc);
            cout << "Kayit basariyla silindi." << endl;
            break;
        case 3:
            KayitlariYazdir();
            break;
        default:
            cout << "Programdan cikis yapildi.";
            exit(0);
        }
    }
    return 0;
}
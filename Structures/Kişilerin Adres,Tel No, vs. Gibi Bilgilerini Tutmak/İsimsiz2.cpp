#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

struct Adres_bilgileri{
	char ad[10];
	char soyad[10];
	char tel_no[11];
	char adres[50];
	int posta_kodu;
};

int main(){
	int i,n;
	char bos;
	cout << "Kayit yapilacak kisi sayisini giriniz: ";
	cin >> n;
	Adres_bilgileri kisiler[n];
	for(i=0;i<n;i++){
		cout << i+1 << ". Kayit" << endl;
		cout << "Ad: ";
		cin >> kisiler[i].ad;
		cout << "Soyad: ";
		cin >> kisiler[i].soyad;
		cout << "Tel No: ";
		cin >> kisiler[i].tel_no;
		cout << "Adres: ";
		cin >> bos;
		gets(kisiler[i].adres);
		cout << "Posta Kodu: ";
		cin >> kisiler[i].posta_kodu;
	}
	for(i=0;i<n;i++){
		cout << endl << i+1 << ". Kayit" << endl;
		cout << "Ad: " << kisiler[i].ad << endl;
		cout << "Soyad: " << kisiler[i].soyad << endl;
		cout << "Tel No: " << kisiler[i].tel_no << endl;
		cout << "Adres: " << kisiler[i].adres << endl;
		cout << "Posta Kodu: " << kisiler[i].posta_kodu << endl;
	}
	return 0;
}


#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct node{
	int data;
	struct node *next;
};

struct node *start = NULL;
struct node *temp = NULL;

void SonaEkle(int veri){
	node *eklenecek1 = (node *)malloc(sizeof(node));
	eklenecek1->data = veri;
	eklenecek1->next = NULL;
	if(start == NULL){
		start = eklenecek1;
	}
	else {
		temp = start;
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = eklenecek1;
	}
}

void BasaEkle(int veri){
	node *eklenecek2 = (node *)malloc(sizeof(node));
	eklenecek2->data = veri;
	eklenecek2->next = start;
	start = eklenecek2;
}

void ArayaEkle(int kontrol,int veri){
	node *eklenecek3 = (node *)malloc(sizeof(node));
	eklenecek3->data = veri;
	temp = start;
	while(temp->next->data != kontrol){
		temp = temp->next;
	}
	node *onune = (node *)malloc(sizeof(node));
	onune = temp->next;
	temp->next = eklenecek3;
	eklenecek3->next = onune;
}

void SondanSil(){
	temp = start;
	while(temp->next->next != NULL){
		temp = temp->next;
	}
	free(temp->next);
	temp->next = NULL;
}

void BastanSil(){
	temp = start->next;
	free(start);
	start = temp;
}

void AradanSil(int veri){
	temp = start;
	while(temp->next->data != veri){
		temp = temp->next;
	}
	node *onceki = NULL;
	node *sonraki = NULL;
	onceki = temp;
	sonraki = temp->next->next;
	free(temp->next);
	onceki->next = sonraki;
}

void Yazdir(){
	temp = start;
	while(temp->next != NULL){
		cout << temp->data << " => ";
		temp = temp->next;
	}
	cout << temp->data << endl;
}

int main(){
	int secim,sayi,ara;
	while(1){
		cout << "1 -> Sona Eleman Ekle " << endl;
		cout << "2 -> Basa Eleman Ekle " << endl;
		cout << "3 -> Araya Eleman Ekle" << endl;
		cout << "4 -> Sondan Eleman Sil" << endl;
		cout << "5 -> Bastan Eleman Sil" << endl;
		cout << "6 -> Aradan Eleman Sil" << endl;
		cout << "Seciminizi girin: ";
		cin >> secim;
		switch(secim){
			case 1:
				cout << "Bir sayi girin: ";
				cin >> sayi;
				SonaEkle(sayi);
				Yazdir();
				break;
			case 2:
				cout << "Bir sayi girin: ";
				cin >> sayi;
				BasaEkle(sayi);
				Yazdir();
				break;
			case 3:
				cout << "Bir sayi girin: ";
				cin >> sayi;
				cout << "Hangi sayinin onune yazmak istediginizi giriniz: ";
				cin >> ara;
				ArayaEkle(ara,sayi);
				Yazdir();
				break;
			case 4:
				SondanSil();
				Yazdir();
				break;
			case 5:
				BastanSil();
				Yazdir();
				break;
			case 6:
				cout << "Sayi giriniz: ";
				cin >> sayi;
				AradanSil(sayi);
				Yazdir();
				break;
		}
	}
	return 0;
}


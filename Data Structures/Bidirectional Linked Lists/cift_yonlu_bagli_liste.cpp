#include <iostream>
using namespace std;

struct node {
    int data;
    struct node *next;
    struct node *prev;
};
struct node *start = NULL;
struct node *temp = NULL;

struct node *DugumOlustur(int veri){
    node *yenidugum = (node *)malloc(sizeof(node));
    yenidugum->data = veri;
    yenidugum->next = NULL;
    yenidugum->prev = NULL;
    return yenidugum;
}

void SonaEkle(int veri){
    node *eklenecek1 = DugumOlustur(veri);
    if(start == NULL){
        start = eklenecek1;
    }
    else {
        temp = start;
        while(temp->next != NULL){
            temp = temp->next;
        }
        eklenecek1->prev = temp;
        temp->next = eklenecek1;
    }
}

void BasaEkle(int veri){
    node *eklenecek2 = DugumOlustur(veri);
    if(start == NULL){
        start = eklenecek2;
    }
    else {
        start->prev = eklenecek2;
        eklenecek2->next = start;
        start = eklenecek2;
    }
}

void ArayaEkle(int veri,int kontrol){
    node *eklenecek3 = DugumOlustur(veri);
    if(start == NULL){
        start = eklenecek3;
    }
    else if(start->data == kontrol){
        BasaEkle(veri);
    }
    else {
        temp = start;
        while(temp->next->data != kontrol){
            temp = temp->next;
        }
        node *onune = temp->next;
        temp->next = eklenecek3;
        eklenecek3->next = onune;
        eklenecek3->prev = temp;
        onune->prev = eklenecek3;
    }
}

void BastanSil(){
    temp = start->next;
    free(start);
    start = temp;
    start->prev = NULL;
}

void SondanSil(){
    temp = start;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}

void AradanSil(int veri){
    temp = start;
    while(temp->next->data != veri){
        temp = temp->next;
    }
    node *on = NULL;
    node *arka = NULL;
    on = temp;
    arka = temp->next->next;
    free(temp->next);
    on->next = arka;
    arka->prev = on;
}

void Yazdir(){
    temp = start;
    cout << "NULL";
    while(temp != NULL){
        cout << " <-> " << temp->data;
        temp = temp->next;
    }
    cout << " <-> NULL" << endl;
}

int main(){
    int a,s,k;
    do{
        cout << "1 - Sona Eleman Ekle " << endl;
        cout << "2 - Basa Eleman Ekle " << endl;
        cout << "3 - Araya Eleman Ekle" << endl;
        cout << "4 - Bastan Eleman Sil" << endl;
        cout << "5 - Sondan Eleman Sil" << endl;
        cout << "6 - Aradan Eleman Sil" << endl;
        cout << "7 - Elemanlari Yazdir" << endl;
        cout << "8 - Cikis            " << endl;
        cout << "Tuslama yapiniz: ";
        cin >> s;
        switch(s){
            case 1:
                cout << "Eklenecek veriyi giriniz: ";
                cin >> a;
                SonaEkle(a);
                cout << "Eleman basariyla eklendi!" << endl;
                break;
            case 2:
                cout << "Eklenecek veriyi giriniz: ";
                cin >> a;
                BasaEkle(a);
                cout << "Eleman basariyla eklendi!" << endl;
                break;
            case 3:
                cout << "Eklenecek veriyi giriniz: ";
                cin >> a;
                cout << "Hangi sayinin onune ekleyeceginizi giriniz: ";
                cin >> k;
                ArayaEkle(a,k);
                cout << "Eleman basariyla eklendi!" << endl;
                break;
            case 4:
                BastanSil();
                cout << "Eleman basariyla silindi!" << endl;
                break;
            case 5:
                SondanSil();
                cout << "Eleman basariyla silindi!" << endl;
                break;
            case 6:
                cout << "Silinecek veriyi giriniz: ";
                cin >> a;
                AradanSil(a);
                cout << "Eleman basariyla silindi!" << endl;
                break;
            case 7:
                Yazdir();
                break;
            case 8:
                cout << "Program kapatildi!" << endl;
                break;
            default:
                cout << "Hatali secim!" << endl;
                break;
        }
    }while(s != 8);
    return 0;
}
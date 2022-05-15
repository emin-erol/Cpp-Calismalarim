#include <iostream>
#include <string.h>
using namespace std;

struct node{
    char label[10];
    int counter;
    int state;
    struct node *komsular[10];
    struct node *next;
};

struct node *start = NULL;
struct node *last = NULL;
struct node *temp;
struct node *Dugumum;

void SehirEkle(char sehir[10]){
    node *current = (node *)malloc(sizeof(node));
    strcpy(current->label,sehir);
    current->counter = 0;
    current->state = 1;
    current->next = NULL;
    if(start == NULL){
        start = current;
        last = current;
    }
    else {
        last->next = current;
        last = current;
    }
}

void DugumuBul(char SehirAdi[10]){
    temp = start;
    while(strcmp(temp->label,SehirAdi) != 0){
        temp = temp->next;
    }
    Dugumum = temp;
}

void KomsuEkle(char i[10],char j[10]){
    node *IlkDugum;
    node *IkinciDugum;
    DugumuBul(i);
    IlkDugum = Dugumum;
    DugumuBul(j);
    IkinciDugum = Dugumum;
    IlkDugum->komsular[IlkDugum->counter] = IkinciDugum;
    IlkDugum->counter++;
    IkinciDugum->komsular[IkinciDugum->counter] = IlkDugum;
    IkinciDugum->counter++;
}

void SehirleriYazdir(){
    temp = start;
    while(temp->next != NULL){
        cout << temp->label << "  ";
        temp = temp->next;
    }
    cout << temp->label << endl;
}

void KomsulariYazdir(char HedefSehir[10]){
    DugumuBul(HedefSehir);
    cout << HedefSehir << " sehrinin komsulari: ";
    for(int i=0;i<Dugumum->counter;i++){
        cout << Dugumum->komsular[i]->label << "  ";
    }
    cout << endl;
}

int main(){
    int s;
    char s1[10],s2[10];
    do{
        cout << endl;
        cout << "1 - Sehir Ekle" << endl;
        cout << "2 - Sehirleri Yazdir" << endl;
        cout << "3 - Komsu Ekle" << endl;
        cout << "4 - Komsulari Yazdir" << endl;
        cout << "5 - Cikis" << endl;
        cout << "Tuslama yapiniz: ";
        cin >> s;
        switch(s){
            case 1:
                cout << "Sehir Adi: ";
                cin >> s1;
                SehirEkle(s1);
                cout << "Sehir Eklendi!" << endl;
                break;
            case 2:
                SehirleriYazdir();
                break;
            case 3:
                cout << "Komsu olusturmak istediginiz sehri ve komsu sayisini giriniz: ";
                cin >> s1 >> s;
                for(int i=0;i<s;i++){
                    cout << i+1 << ". Komsuyu girin: ";
                    cin >> s2;
                    KomsuEkle(s1,s2);
                    cout << i+1 << ". Komsu basariyla eklendi!" << endl;
                }
                break;
            case 4:
                cout << "Komsularini yazdirmak istediginiz sehri giriniz: ";
                cin >> s1;
                KomsulariYazdir(s1);
                break;
            case 5:
                cout << "Program kapatildi!" << endl;
                break;
            default:
                cout << "Hatali secim!" << endl;
                break;
        }
    }while(s != 5);
    return 0;
}
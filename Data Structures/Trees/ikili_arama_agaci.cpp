#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node *root = NULL;

struct node *DugumOlustur(int veri){
    node *temp = (node *)malloc(sizeof(node));
    temp->data = veri;
    temp->left = NULL;
    temp->right = NULL;
    if(root == NULL){
        root = temp;
    }
    return temp;
}

void InOrder(node *root){
    if(root != NULL){
        InOrder(root->left);
        cout << root->data << "  ";
        InOrder(root->right);
    }
}

struct node *Ekle(node *eklenecek,int veri){
    if(eklenecek == NULL){
        return DugumOlustur(veri);
    }
    if(veri < eklenecek->data){
        eklenecek->left = Ekle(eklenecek->left,veri);
    }
    else if(veri > eklenecek->data){
        eklenecek->right = Ekle(eklenecek->right,veri);
    }
}

struct node *Search(int veri){
    node *current;
    current = root;
    while(current->data != veri){
        if(current != NULL){
            cout << current->data << " -> ";
            if(veri < current->data){
                current = current->left;
            }
            else {
                current = current->right;
            }
        }
        else {
            cout << "Aradiginiz sayi agacta bulunmuyor!" << endl;
            return NULL;
        }
    }
    cout << current->data << endl;
    return current;
}

int main(){
    int a,s;
    do{
        cout << endl << "1 - Eleman Ekle";
        cout << endl << "2 - Eleman Arama";
        cout << endl << "3 - Yazdir";
        cout << endl << "4 - Cikis";
        cout << endl << "Tuslama yapiniz: ";
        cin >> s;
        switch(s){
            case 1:
                cout << "Eklenecek veriyi giriniz: ";
                cin >> a;
                Ekle(root,a);
                break;
            case 2:
                cout << "Aramak istediginiz sayiyi giriniz: ";
                cin >> a;
                Search(a);
                break;
            case 3:
                 InOrder(root);
                 break;
            case 4:
                cout << "Program kapatildi!" << endl;
                break;
            default:
                cout << "Hatali secim!" << endl;
                break;
        }
    }while(s != 4);
    return 0;
}
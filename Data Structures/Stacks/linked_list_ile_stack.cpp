#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};

struct node *top = NULL;

void Push(int veri){
    struct node *eklenecek = (node *)malloc(sizeof(node));
    eklenecek->data = veri;
    eklenecek->next = NULL;
    if(top != NULL){
        eklenecek->next = top;
    }
    top = eklenecek;
}

void Pop(){
    if(top == NULL){
        cout << "Stack zaten bos!" << endl;
    }
    else {
        struct node *temp = NULL;
        temp = top;
        top = top->next;
        free(temp);
    }
}

int Peek(){
    return top->data;
}

void Yazdir(){
    struct node *q = NULL;
    q = top;
        while(q != NULL){
            cout << q->data << " -> ";
            q = q->next;
        }
        cout << "NULL" << endl;
}

int main(){
    int a,s;
    do{
        cout << "1 - Push Islemi" << endl;
        cout << "2 - Pop Islemi " << endl;
        cout << "3 - Peek Islemi" << endl;
        cout << "4 - Yazdirma Islemi" << endl;
        cout << "5 - Cikis " << endl;
        cout << "Tuslama yapiniz: ";
        cin >> s;
        switch(s){
            case 1:
                cout << "Eklenecek veriyi giriniz: ";
                cin >> a;
                Push(a);
                break;
            case 2:
                Pop();
                cout << "Son eleman basariyla silindi!" << endl;
                break;
            case 3:
                cout << "Son eleman: " << Peek() << endl;
                break;
            case 4:
                Yazdir();
                break;
            case 5:
                cout << "Program sonlandirildi." << endl;
                break;
            default:
                cout << "Hatali secim!" << endl;
                break;
        }
    }while(s != 5);
    return 0;
}
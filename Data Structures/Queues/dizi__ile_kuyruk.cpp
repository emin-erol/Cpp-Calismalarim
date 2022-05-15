#include <iostream>
using namespace std;

int dizi[5],front=-1,rear=-1;

void enQueue(int veri){
    if(rear == 5){
        cout << "Kuyruk dolu!" << endl;
    }
    else {
        if(front == -1){
            front = 0;
        }
        rear++;
        dizi[rear] = veri;
    }
}

void deQueue(){
    if(front == -1 || front > rear){
        cout << "Kuyruk zaten bos!" << endl;
        front = -1;
        rear = -1;
    }
    else {
        front++;
    }
}

void Yazdir(){
    int i;
    if(front == -1 || front > rear){
        cout << "Stack bos!" << endl;
    }
    else {
        for(i=front;i<=rear;i++){
            cout << dizi[i] << "  ";
        }
    }
    cout << endl;
}

int main(){
    int a,s;
    do{
        cout << "1 - Eleman Ekleme" << endl;
        cout << "2 - Eleman Silme " << endl;
        cout << "3 - Elemanlari Yazdir" << endl;
        cout << "4 - Cikis" << endl;
        cout << "Tuslama yapiniz: ";
        cin >> s;
        switch(s){
            case 1:
                cout << "Eklenecek veriyi giriniz: ";
                cin >> a;
                enQueue(a);
                cout << "Eleman ekleme basarili!" << endl;
                break;
            case 2:
                deQueue();
                cout << "Eleman silme basarili!" << endl;
                break;
            case 3:
                Yazdir();
                break;
            case 4:
                cout << "Program sonlandirildi!" << endl;
            default:
                cout << "Hatali islem!" << endl;
                break;
        }
    }while(s != 4);
    return 0;
}
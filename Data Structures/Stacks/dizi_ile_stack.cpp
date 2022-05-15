#include <iostream>
using namespace std;

int dizi[5],top=-1;

void Push(int veri){
    if(top+1 == 5){
        cout << "Stack dolu!";
    }
    else {
        top += 1;
        dizi[top] = veri;
    }
}

void Pop(){
    if(top == -1){
        cout << "Stack zaten bos!";
    }
    else {
        top -= 1;
    }
}

int Peek(){
    return dizi[top];
}

void Yazdir(){
    int i;
    for(i=0;i<top+1;i++){
        cout << dizi[i] << "  "; 
    }
    cout << endl;
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
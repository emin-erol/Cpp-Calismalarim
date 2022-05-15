#include <iostream>
using namespace std;

int main(){
    int yas;
    cout << "Lutfen yasinizi giriniz: ";
    cin >> yas;
    try{
        if(yas < 0)
            throw 101;
        else{
            cout << "TAMAM";
        }
    }
    catch(int hataKodu){
        cout << "Gecersiz yas " << hataKodu;
    }
    return 0;
}
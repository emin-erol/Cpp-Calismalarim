#include <iostream>
using namespace std;
class Head{
    public:
        void Hesapla(int sayi){
            int carpim = 1;
            for (int i=2;i<=sayi;i++){
                carpim *= i;
            }
            cout << sayi << " ! = " << carpim << endl;
        }
};